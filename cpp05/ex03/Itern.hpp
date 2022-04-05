//
// Created by Gaynell Hanh on 4/5/22.
//

#ifndef CPP_MODULE_ITERN_HPP
#define CPP_MODULE_ITERN_HPP

#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Itern
{
private:
	static const std::string forms[3];
public:
class IncorrectFormName:public std::exception
{
	virtual const char *what() const throw();
};
	Itern();
	Itern(Itern const &rhs);
	~Itern();

	Itern &operator=(Itern const &rhs);

	Form *makeForm(std::string form, std::string target);
};


#endif //CPP_MODULE_ITERN_HPP
