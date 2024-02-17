#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include <new>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
	public :
		WrongCat();
		WrongCat(WrongCat const & WrongCat);
		WrongCat &operator=(WrongCat const & WrongCat);
		~WrongCat();
		std::string getType();
};

#endif
