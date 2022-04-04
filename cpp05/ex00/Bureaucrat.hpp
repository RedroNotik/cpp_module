//
// Created by Gaynell Hanh on 3/29/22.
//

#ifndef CPP_MODULE_BUREAUCRAT_HPP
#define CPP_MODULE_BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
protected:
	Bureaucrat();
private:
	const std::string name;
	int grade;
public:
	class GradeTooLowException:public std::exception
	{
		virtual const char* what() const throw();
	};
	class GradeTooHighException:public std::exception
	{
		virtual const char* what() const throw();
	};
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(Bureaucrat const &rhs);
	~Bureaucrat();
	Bureaucrat &operator=(Bureaucrat const &rhs);

	std::string getName() const;
	int getGrade(void) const;
	void IncrGrade();
	void DecrGrade();

	void signForm(For);
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const & i);

#endif //CPP_MODULE_BUREAUCRAT_HPP
