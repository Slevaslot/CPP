#include "Cat.hpp"

Cat::Cat(void) {
	_name = "Cat";
	std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(Cat const & cat) {
	*this = cat;
}

Cat &Cat::operator=(Cat const & cat) {
	_name = cat._name;
	return (*this);
}

std::string Cat::getType() {
	return (_name);
}

Cat::~Cat(void) {
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) {
	std::cout << "Meow!" << std::endl;
}
