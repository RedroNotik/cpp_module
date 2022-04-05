//
// Created by Gaynell Hanh on 4/5/22.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):Form
("PresidentialPardonForm", 25, 5), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &rhs):Form
												   ("PresidentialPardonForm", 25, 5)
{
	*this = rhs;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->target = rhs.target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::task(const Bureaucrat &bureaucrat) const
{
	(void)bureaucrat;
	std::cout << target << " has been pardoned by Zaphod Beeblebrox." <<
	std::endl;
}