//
// Created by Gaynell Hanh on 3/31/22.
//

#ifndef CPP_MODULE_FORM_HPP
#define CPP_MODULE_FORM_HPP

#include "Bureaucrat.hpp"

class Form:public Bureaucrat
{
private:
	const std::string	name;
	bool				is_signed;
	const int			rd_to_sign;
	const int			rd_to_execute;
	Form();
public:
	Form(std::string &name, int sign, int execute);
	Form(Form const &rhs);
	~Form();

	Form &operator=(Form const &rhs);
//	Form(std::string)
};


#endif //CPP_MODULE_FORM_HPP
