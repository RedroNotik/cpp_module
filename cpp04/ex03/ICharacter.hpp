//
// Created by Gaynell Hanh on 3/27/22.
//

#ifndef CPP_MODULE_ICHARACTER_HPP
#define CPP_MODULE_ICHARACTER_HPP

#include "AMateria.hpp"

class AMateria;

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};


class Character:public ICharacter
{
protected:
	Character();
private:
	std::string name;
	AMateria *inventory[4];
public:
	Character(std::string const &rhs);
	Character(Character const &rhs);
	~Character();

	Character &operator=(Character const &rhs);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif //CPP_MODULE_ICHARACTER_HPP
