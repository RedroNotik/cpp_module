//
// Created by Gaynell Hanh on 4/5/22.
//

#ifndef CPP_MODULE_PRESIDENTIALPARDONFORM_HPP
#define CPP_MODULE_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm:public Form
{
private:
	std::string target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &rhs);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);

	void task(const Bureaucrat &bureaucrat) const;
};


#endif //CPP_MODULE_PRESIDENTIALPARDONFORM_HPP
