#ifndef Cat_HPP
# define Cat_HPP

#include <iostream>
#include <string>
#include <new>
#include "Animal.hpp"

class Cat : public Animal {
	public :
		Cat();
		Cat(Cat const & Cat);
		Cat &operator=(Cat const & Cat);
		virtual ~Cat();
		std::string getType();
		void makeSound();
};

#endif
