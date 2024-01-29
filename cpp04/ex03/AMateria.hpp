#ifndef AMateria_HPP
# define AMateria_HPP

#include <iostream>
#include <string>
#include <new>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {
	protected :
		std::string _type;
	public :
		AMateria();
		AMateria(std::string const & type);
		virtual ~AMateria();
		std::string const  & getType() const;
		void setType(std::string type);
		virtual AMateria* clone() const = 0;
		virtual void use (ICharacter& target);
};

#endif
