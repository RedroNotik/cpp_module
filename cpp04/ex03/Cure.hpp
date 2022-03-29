//
// Created by Gaynell Hanh on 3/29/22.
//

#ifndef CPP_MODULE_CURE_HPP
#define CPP_MODULE_CURE_HPP

#include "AMateria.hpp"

class Cure:public AMateria
{
public:
	Cure();
	~Cure();
	Cure(Cure const &obj);
	Cure &operator=(Cure const &obj);
	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //CPP_MODULE_CURE_HPP
