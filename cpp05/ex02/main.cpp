//
// Created by Gaynell Hanh on 3/29/22.
//

#include "Bureaucrat.hpp"
#include "iomanip"
#include "ShrubberyCreationForm.hpp"

int main()
{
	Form *shrub = new ShrubberyCreationForm("home");
	Bureaucrat *bob = new Bureaucrat("Bob", 20);
	Bureaucrat *john = new Bureaucrat("John", 138);
	Bureaucrat *slava = new Bureaucrat("Slava", 150);
	shrub->execute(*bob);
	slava->signForm(*shrub);
	bob->signForm(*shrub);
	shrub->execute(*john);
	shrub->execute(*bob);
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	delete shrub;
	delete bob;
	delete john;
	return 0;
}