#ifndef Cure_HPP
# define Cure_HPP

#include <iostream>
#include <string>
#include <new>
#include "ICharacter.hpp"

class Cure : public AMateria {
	public :
		Cure(std::string const & type);
		Cure();
		~Cure();
		std::string const  & getType() const;
		Cure* clone() const;
		void use (ICharacter& target);
};

#endif