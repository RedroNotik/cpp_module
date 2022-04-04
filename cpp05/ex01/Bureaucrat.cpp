//
// Created by Gaynell Hanh on 3/29/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(const std::string &name, int grade):name(name), grade
(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException() ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs): name(rhs.name), grade(rhs.grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException() ;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->grade = rhs.grade;
	return *this;
}

void Bureaucrat::signForm(Form form)
{
	try
	{
		form.beSigned(*this);
//		std::cout << *this << " signed " << form << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << *this << " couldn't sign " << form << " because "
		<< e.what() << std::endl;
	}
}

int Bureaucrat::getGrade() const { return grade;}

std::string Bureaucrat::getName() const { return name;}

void Bureaucrat::IncrGrade()
{
	grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException() ;
}

void Bureaucrat::DecrGrade()
{
	grade++;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException() ;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Exception:Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Exception:Grade too low");
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}