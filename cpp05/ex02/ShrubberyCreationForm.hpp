//
// Created by timof on 03.04.2022.
//

#ifndef CPP_MODULE_SHRUBBERYCREATIONFORM_HPP
#define CPP_MODULE_SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm:public Form
{
private:
	static const std::string tree[10];
	std::string target;
	ShrubberyCreationForm();
public:
class WriteInFileError:public std::exception
{
	virtual const char* what() const throw();
};
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

	void execute(Bureaucrat const & executor) const;
};


#endif //CPP_MODULE_SHRUBBERYCREATIONFORM_HPP
