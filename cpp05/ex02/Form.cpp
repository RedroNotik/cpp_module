//
// Created by Gaynell Hanh on 3/31/22.
//

#include "Form.hpp"

//Form::Form(){}

Form::Form(const std::string &name, int sign, int execute):name(name), is_signed
(false),
rd_to_sign(sign), rd_to_execute(execute)
{}

Form::Form(const Form &rhs):name(rhs.name), rd_to_sign(rhs.rd_to_sign), rd_to_execute
(rhs.rd_to_execute)
{
	*this = rhs;
}

Form &Form::operator=(const Form &rhs)
{
	this->is_signed = rhs.is_signed;
	return *this;
}

Form::~Form()
{}

std::string Form::getName() const {return name;}

bool Form::getSign() const {return is_signed;}

int Form::getRGToExecute() const {return rd_to_execute;}

int Form::getRGToSign() const {return  rd_to_sign;}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > rd_to_sign)
		throw Form::GradeTooLowException();
	else
		is_signed = true;
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Form::IsNotSigned::what() const throw()
{
	return ("Exception: Form is not signed");
}

void Form::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getRGToExecute())
		throw Form::GradeTooLowException();
	else if (!(this->getSign()))
		throw Form::IsNotSigned();
	this->task(executor);
}

std::ostream & operator<<(std::ostream &o, Form const &i)
{
	o << i.getName() << ":";
//	o << "Is signed: ";
	i.getSign() ? o << "Yes" << ":" : o << "No" << ":";
	o << /*"Required grade to sign: " << */i.getRGToSign() << ":";
	o << /*"Required grade to execute: " <<*/ i.getRGToExecute();
	return o;
}