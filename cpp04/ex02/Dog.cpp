//
// Created by Gaynell Hanh on 3/25/22.
//

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Default Dog constructor is called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog &rhs)
{
	this->brain = new Brain();
	std::cout << "Copy Dog constructor is called" << std::endl;
	*this = rhs;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "Dog destructor is called" << std::endl;
}

Dog &Dog::operator=(const Dog &rhs)
{
//	(void)rhs;
	this->Animal::operator=(rhs);
	*this->brain = *rhs.brain;
	this->type = rhs.type;
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Bark bark!! BARK BARK..." << std::endl;
}