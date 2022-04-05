//
// Created by Gaynell Hanh on 4/5/22.
//

#ifndef CPP_MODULE_ROBOTOMYREQUESTFORM_HPP
#define CPP_MODULE_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <time.h>
#include <unistd.h> //sleep

class RobotomyRequestForm:public Form
{
private:
	RobotomyRequestForm();
	std::string target;
	static const std::string voice[4];
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &rhs);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

	void task(const Bureaucrat &executor) const;
};


#endif //CPP_MODULE_ROBOTOMYREQUESTFORM_HPP
