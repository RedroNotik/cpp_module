//
// Created by Gaynell Hanh on 3/25/22.
//

#include "DiamondTrap.hpp"


DiamondTrap::DiamondTrap()
{
//	this->name = this->ClapTrap::name;
	this->hit_points = this->FragTrap::hit_points;
	this->en_points =  this->ScavTrap::en_points;
	this->attack_d =  this->FragTrap::attack_d;
	std::cout << "Diamond def constructor is called" <<std::endl;
}

DiamondTrap::DiamondTrap(const std::string name):name(name)
{
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hit_points = this->FragTrap::fr_hp;
	this->en_points =  this->ScavTrap::en_points;
	this->attack_d =  this->FragTrap::fr_ad;
}

DiamondTrap::DiamondTrap(const DiamondTrap &src)
{
	*this = src;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor is called" <<std::endl;
}

DiamondTrap & DiamondTrap::operator=(const DiamondTrap &src)
{
	this->hit_points = src.hit_points;
	this->en_points = src.en_points;
	this->attack_d = src.attack_d;
	return *this;
}
void DiamondTrap::attack(const std::string &target)
{
	this->ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Name: " << this->name << "\nClapTrapName: "
	<< ClapTrap::name << "\n(HP;EP,AD)  (" << this->hit_points << ";"
	<< this->en_points << ";" << this->attack_d << ")\n";
}

