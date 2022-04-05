//
// Created by Gaynell Hanh on 4/5/22.
//

#include "Itern.hpp"

std::string const Itern::forms[3] =
{
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
};

Itern::Itern()
{}

Itern::Itern(const Itern &rhs)
{
	*this = rhs;
}

Itern::~Itern()
{}

Itern &Itern::operator=(const Itern &rhs)
{
	(void)rhs;
	return *this;
}

Form *Itern::makeForm(std::string form, std::string target)
{
	try
	{
		int i;
		for (i = 0; i < 3; i++)
			if (form == forms[i])
				break;
		switch (i)
		{
			case 0:
				return (new RobotomyRequestForm(target));
			case 1:
				return (new PresidentialPardonForm(target));
			case 2:
				return (new ShrubberyCreationForm(target));
			default:
				throw Itern::IncorrectFormName();
		}
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (NULL);
}

const char *Itern::IncorrectFormName::what() const throw()
{
	return ("Incorrect form name");
}