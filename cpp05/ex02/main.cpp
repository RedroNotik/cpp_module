//
// Created by Gaynell Hanh on 3/29/22.
//

#include "Bureaucrat.hpp"
#include "iomanip"

int main()
{
	Form	*form = new Form("Form_1", 130, 30);
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	{
		try
		{
			Bureaucrat *bob = new Bureaucrat("Bob", 131);
			Form *new_f = form;
			bob->signForm(*new_f);
			bob->IncrGrade();
			bob->signForm(*new_f);
			std::cout << *bob << std::endl;
			delete bob;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	std::cout << *form << std::endl;
	{
		try
		{
			Bureaucrat *bob = new Bureaucrat("NeBob", 122);
			std::cout << *bob << std::endl;
			bob->signForm(*form);
			delete bob;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	delete form;
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	return 0;
}