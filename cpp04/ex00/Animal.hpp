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
		~Animal();
		std::string getType();
		void makeSound();
};

class Dog : public Animal {
	public :
		Dog();
};

class Cat : public Animal {
	public :
		Cat();
};

#endif