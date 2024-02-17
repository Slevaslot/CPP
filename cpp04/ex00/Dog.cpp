#include "Dog.hpp"

Dog::Dog(void) {
	_name = "Dog";
	std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(Dog const & Dog) {
	*this = Dog;
}

Dog &Dog::operator=(Dog const & Dog) {
	_name = Dog._name;
	return (*this);
}

std::string Dog::getType() {
	return (_name);
}

Dog::~Dog(void) {
	std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound(void) {
	std::cout << "Bark!" << std::endl;
}
