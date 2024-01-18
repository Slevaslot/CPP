#include "Animal.hpp"

Animal::Animal(void) {
	_name = "Unknown animal";
	// std::cout << "Default Constructor called" << std::endl;
}

std::string Animal::getType() {
	return (_name);
}

Dog::Dog(void): Animal() {
	std::cout << "Dog Constructor called" << std::endl;
	_name = "Dog";
}

Cat::Cat(void): Animal() {
	std::cout << "Cat Constructor called" << std::endl;
	_name = "Cat";
}

Animal::~Animal(void) {
	std::cout << "Destructor called" << std::endl;
}

void Animal::makeSound(void) {
	if (_name == "Dog")
		std::cout << "Bark!" << std::endl;
	else if (_name == "Cat")
		std::cout << "Meow!" << std::endl;
	else
		std::cout << "Intangible sound." << std::endl;
}
