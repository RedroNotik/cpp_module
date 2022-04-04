//
// Created by Gaynell Hanh on 3/31/22.
//

#ifndef CPP_MODULE_FORM_HPP
#define CPP_MODULE_FORM_HPP

#include "iostream"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				is_signed;
	const int			rd_to_sign;
	const int			rd_to_execute;
	Form();

public:
	class GradeTooLowException:public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooHighException:public std::exception
	{
		virtual const char* what() const throw();
	};
	class IsNotSigned:public std::exception
	{
		virtual const char* what() const throw();
	};
	Form(const std::string &name, int sign, int execute);
	Form(Form const &rhs);
	virtual ~Form();

	Form &operator=(Form const &rhs);

	std::string getName(void) const;
	bool getSign(void) const;
	int getRGToSign(void) const;
	int getRGToExecute(void) const;

	void beSigned(Bureaucrat const &bureaucrat);

	virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream & operator<<(std::ostream &o, Form const & i);


#endif //CPP_MODULE_FORM_HPP
