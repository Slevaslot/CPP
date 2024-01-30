#ifndef Ice_HPP
# define Ice_HPP

#include <iostream>
#include <string>
#include <new>
#include "ICharacter.hpp"

class Ice : public AMateria{
	public :
		Ice(std::string const & type);
		Ice();
		~Ice();
		std::string const  & getType() const;
		Ice* clone() const;
		void use (ICharacter& target);
};

#endif
