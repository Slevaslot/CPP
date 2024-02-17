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
	*_brain = cat._brain;
	return (*this);
}

std::string Cat::getType() {
	return (_name);
}

Cat::~Cat(void) {
	delete(_brain);
	std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound(void) {
	std::cout << "Meow!" << std::endl;
}
