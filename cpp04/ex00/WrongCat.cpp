#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	_name = "Cow";
	std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & Wrongcat) {
	*this = Wrongcat;
}

WrongCat &WrongCat::operator=(WrongCat const & Wrongcat) {
	_name = Wrongcat._name;
	return (*this);
}

std::string WrongCat::getType() {
	return (_name);
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat Destructor called" << std::endl;
}
