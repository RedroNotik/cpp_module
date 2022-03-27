//
// Created by Gaynell Hanh on 3/27/22.
//

#ifndef CPP_MODULE_ICE_HPP
#define CPP_MODULE_ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice:public AMateria
{
public:
	Ice();
	~Ice();
	Ice(Ice const &rhs);
	Ice &operator=(Ice const &rhs);

	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //CPP_MODULE_ICE_HPP
