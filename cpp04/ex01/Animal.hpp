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
		virtual ~Animal();
		std::string getType();
		void makeSound();
};



#endif
