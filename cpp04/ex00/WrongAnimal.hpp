#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>
#include <new>

class WrongAnimal {
	protected :
		std::string _name;
	public :
		WrongAnimal();
		WrongAnimal(WrongAnimal const & ani);
		WrongAnimal &operator=(WrongAnimal const & ani);
		~WrongAnimal();
		std::string getType();
		void makeSound();
};

#endif
