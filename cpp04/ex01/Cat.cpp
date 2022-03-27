//
// Created by Gaynell Hanh on 3/27/22.
//

#include "Cat.h"

Cat::Cat()
{
	std::cout << "Default Cat constructor is called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::Cat(const Cat &rhs)
{
	this->brain = new Brain();
	std::cout << "Copy Cat constructor is called" << std::endl;
	*this = rhs;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "Cat destructor is called" << std::endl;
}

Cat &Cat::operator=(const Cat &rhs)
{
//	(void )rhs;
	this->Animal::operator=(rhs);
//	this->brain = rhs.brain; // Shallow copy
	*this->brain = *rhs.brain; // deep copy
	this->type = rhs.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meow meow meow" << std::endl;
}