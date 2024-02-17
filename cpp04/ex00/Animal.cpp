#include "Animal.hpp"

Animal::Animal(void) {
	_name = "Unknown animal";
	std::cout << "Default Constructor called" << std::endl;
}

Animal::Animal(Animal const & ani) {
	*this = ani;
}

Animal &Animal::operator=(Animal const &  ani) {
	_name = ani._name;
	return (*this);
}

std::string Animal::getType() {
	return (_name);
}

Animal::~Animal(void) {
	std::cout << "Destructor called" << std::endl;
}

void Animal::makeSound(void) {
	std::cout << "Intangible sound." << std::endl;
}
