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

class Brain {
	protected :
		std::string _ideas[100];
};

class Dog : public Animal {
	private :
		Brain *_brain;
	public :
		Dog();
		~Dog();
		// std::string getType();
};

class Cat : public Animal {
	private :
		Brain *_brain;
	public :
		Cat();
		~Cat();
		// std::string getType();
};


#endif
