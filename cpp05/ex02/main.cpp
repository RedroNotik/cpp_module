//
// Created by Gaynell Hanh on 3/29/22.
//

#include "Bureaucrat.hpp"
#include "iomanip"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat bob("Bob", 20);
	Bureaucrat john("John", 138);
	Bureaucrat slava("Slava", 150);
	{
		ShrubberyCreationForm shrub("home");
		bob.executeForm(shrub);
		slava.signForm(shrub);
		bob.signForm(shrub);
		john.executeForm(shrub);
		bob.executeForm(shrub);
	}
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	{
		RobotomyRequestForm form("printer");
		bob.signForm(form);
		john.executeForm(form);
		bob.executeForm(form);
	}
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	{
		PresidentialPardonForm form("Alex");
		Bureaucrat lol = bob;
		lol.signForm(form);
		lol.executeForm(form);
		Bureaucrat kek("Tim", 2);
		kek.executeForm(form);
	}
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	return 0;
}