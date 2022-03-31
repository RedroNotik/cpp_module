//
// Created by Gaynell Hanh on 3/29/22.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(const std::string &name, int grade):name(name), grade
(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs): name(rhs.name), grade(rhs.grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->grade = rhs.grade;
	return *this;
}

int Bureaucrat::getGrade() const { return grade;}

std::string Bureaucrat::getName() const { return name;}

void Bureaucrat::IncrGrade()
{
	grade--;
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::DecrGrade()
{
	grade++;
	if (grade < 1)
		throw Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return o;
}