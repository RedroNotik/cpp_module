//
// Created by Gaynell Hanh on 3/27/22.
//

#ifndef CPP_MODULE_AMATERIA_HPP
#define CPP_MODULE_AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	AMateria();
	std::string type;
public:
	AMateria(std::string const &type);
	AMateria(AMateria const &rhs);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &rhs);
	std::string const & getType() const;

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP_MODULE_AMATERIA_HPP
