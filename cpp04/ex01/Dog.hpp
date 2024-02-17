#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include <new>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
	private :
		Brain *_brain;
	public :
		Dog();
		Dog(Dog const & Dog);
		Dog &operator=(Dog const & Dog);
		~Dog();
		std::string getType();
		void makeSound();
};

#endif
