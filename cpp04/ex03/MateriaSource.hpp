#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include <string>
#include <new>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
    protected :
        AMateria *_item[4];
    public:
        ~MateriaSource();
        MateriaSource();
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif
