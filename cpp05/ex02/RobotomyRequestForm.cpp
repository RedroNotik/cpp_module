//
// Created by Gaynell Hanh on 4/5/22.
//

#include "RobotomyRequestForm.hpp"

std::string const RobotomyRequestForm::voice[4]=
{
		"Rzzzz...zzz.",
		"Drrxzzzz.........",
		"Drrzrzzzz....zzzrzr",
		"DRRRrrrZZzzzz...zzzz"
};

RobotomyRequestForm::RobotomyRequestForm(const std::string &target):Form
("RobotomyRequestForm", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &rhs):Form
							 ("RobotomyRequestForm", 72, 45)
{
	*this = rhs;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	this->target = rhs.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::task(const Bureaucrat &executor) const
{
	try
	{
		if (executor.getGrade() > this->getRGToExecute())
			throw Form::GradeTooLowException();
		else if (!(this->getSign()))
			throw Form::IsNotSigned();
		for (int i = 0; i < 4; i++)
		{
			sleep(i);
			std::cout << voice[i] << std::endl;
		}
		srand( (unsigned)time( NULL ) );
		if (rand() % 2 != 0)
			std::cout << target
					  << " has been robotomized successfully 50% of the "
						 "time" << std::endl;
		else
			std::cout << "The robotomy failed." << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}