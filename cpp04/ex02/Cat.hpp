#ifndef Cat_HPP
# define Cat_HPP

#include <iostream>
#include <string>
#include <new>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private : 
		Brain *_brain;
	public :
		Cat();
		~Cat();
};

#endif

