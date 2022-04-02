//
// Created by Gaynell Hanh on 3/29/22.
//

#include "Bureaucrat.hpp"
#include "iomanip"

int main()
{
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	{
		try
		{
			Bureaucrat *bob = new Bureaucrat("Bob", 1222);
			Bureaucrat *josh = new Bureaucrat(*bob);
			std::cout << *bob << std::endl;
			std::cout << *josh << std::endl;
			delete bob;
			delete josh;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	{
		try
		{
			Bureaucrat *bob = new Bureaucrat("Bob", 122);
			std::cout << *bob << std::endl;
			Bureaucrat *josh = new Bureaucrat(*bob);
			std::cout << *josh << std::endl;
			delete bob;
			delete josh;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	{
		try
		{
			Bureaucrat *bob = new Bureaucrat("Bob", 150);
			std::cout << *bob << std::endl;
			bob->IncrGrade();
			std::cout << *bob << std::endl;
			bob->DecrGrade();
			std::cout << *bob << std::endl;
			try {
				bob->DecrGrade();
				std::cout << *bob << std::endl;
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
			delete bob;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	{
		try
		{
			Bureaucrat *bob = new Bureaucrat("Bob", 1);
			std::cout << *bob << std::endl;
			try {
				bob->IncrGrade();
				std::cout << *bob << std::endl;
				bob->DecrGrade();
				std::cout << *bob << std::endl;
			}
			catch (std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
			delete bob;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout <<  std::setfill('*') <<std::setw(40) << "*"<<std::endl;
	return 0;
}