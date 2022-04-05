//
// Created by timof on 03.04.2022.
//

#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::tree[10] = {
		" ",
		"       _-_",
		"    /~~   ~~\\",
		" /~~         ~~\\",
		"{               }",
		" \\  _-     -_  /",
		"   ~  \\\\ //  ~",
		"_- -   | | _- _",
		"  _ -  | |   -_",
		"      // \\\\"
};

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target): Form
("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm
&rhs): Form
("ShrubberyCreationForm", 145, 137)
{
	*this = rhs;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(
		const ShrubberyCreationForm &rhs)
{
	this->target = rhs.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

const char *ShrubberyCreationForm::WriteInFileError::what() const throw()
{
	return ("Exception opening/writing/closing file");
}

void ShrubberyCreationForm::task(const Bureaucrat &executor) const
{
	try{
		if (executor.getGrade() > this->getRGToExecute())
			throw Form::GradeTooLowException();
		else if (!(this->getSign()))
			throw Form::IsNotSigned();
		std::string filename;
		filename += target;
		filename += "_shrubbery";
		std::ofstream _outfile(filename);
		for (int i = 0; i < 10; i++)
			_outfile << tree[i] << std::endl;
		_outfile.close();
		if (!_outfile.good())
			throw ShrubberyCreationForm::WriteInFileError();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}