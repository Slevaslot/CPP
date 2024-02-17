#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>
#include <new>

class Animal {
	protected :
		std::string _name;
	public :
		Animal();
		Animal(Animal const & ani);
		Animal &operator=(Animal const & ani);
		virtual ~Animal();
		std::string getType();
		virtual void makeSound();
};



#endif
