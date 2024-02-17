#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include <new>
#include "Animal.hpp"

class Dog : public Animal {
	public :
		Dog();
		Dog(Dog const & Dog);
		Dog &operator=(Dog const & Dog);
		virtual ~Dog();
		std::string getType();
		void makeSound();
};

#endif
