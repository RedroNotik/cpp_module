//
// Created by Gaynell Hanh on 3/29/22.
//

#include "Bureaucrat.hpp"
#include "iomanip"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Itern.hpp"

int main()
{
	Bureaucrat bob("Bob", 20);
	Bureaucrat john("John", 138);
	Bureaucrat slava("Slava", 150);
	Itern someRandomIntern;
	Form *fff;
	{
		fff = someRandomIntern.makeForm("shrubbery creation", "garden");
//		ShrubberyCreationForm shrub("home");
		bob.executeForm(*fff);
		slava.signForm(*fff);
		bob.signForm(*fff);
		john.executeForm(*fff);
		bob.executeForm(*fff);
		delete fff;
	}
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	{
		fff = someRandomIntern.makeForm("robotomy request", "clock");
		bob.signForm(*fff);
		john.executeForm(*fff);
		bob.executeForm(*fff);
		delete fff;
	}
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	{
		fff = someRandomIntern.makeForm("shrubbery creation", "John");
		Bureaucrat lol = bob;
		lol.signForm(*fff);
		lol.executeForm(*fff);
		Bureaucrat kek("Tim", 2);
		kek.executeForm(*fff);
		delete(fff);
	}
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	fff = someRandomIntern.makeForm("Incorrect name", "raz");
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	return 0;
}