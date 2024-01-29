#ifndef CHARACTER_HPP
#define  CHARACTER_HPP

# include <fstream>
# include <iomanip>
# include <iostream>
# include <stdlib.h>
# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class ICharacter;
class AMateria;

class Character : public ICharacter
{
	protected :
		AMateria* _item[4];
		std::string _name;
	public :
		Character();
		Character(std::string name);
		Character(ICharacter &chara);
		Character &operator=(Character &chara);
		~Character();
		std::string const & getName() const;
        AMateria * getMater(int array);
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif