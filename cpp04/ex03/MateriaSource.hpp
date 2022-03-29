//
// Created by Gaynell Hanh on 3/29/22.
//

#ifndef CPP_MODULE_MATERIASOURCE_HPP
#define CPP_MODULE_MATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource:public  IMateriaSource
{
private:
	AMateria* inventory[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &src);
	~MateriaSource();
	MateriaSource &operator=(MateriaSource const &src);

	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
};


#endif //CPP_MODULE_MATERIASOURCE_HPP
