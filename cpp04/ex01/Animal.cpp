#include "Animal.hpp"

Animal::Animal(void) {
	_name = "Unknown animal";
	// std::cout << "Default Constructor called" << std::endl;
}

std::string Animal::getType() {
	return (_name);
}

Dog::Dog(void): Animal() {
	// std::cout << "Dog Constructor called" << std::endl;
	_brain = new (Brain);
	_name = "Dog";
}

Cat::Cat(void): Animal() {
	// std::cout << "Cat Constructor called" << std::endl;
	_brain = new (Brain);
	_name = "Cat";
}

Animal::~Animal(void) {
	// if (_name == "Dog" || _name == "Cat")
	// 	delete (_brain);
	std::cout << "Destructor called" << std::endl;
}

Dog::~Dog() {
	delete (_brain);
	// std::cout << "Dog Destructor called" << std::endl;
}

Cat::~Cat() {
	delete (_brain);
	// std::cout << "Cat Destructor called" << std::endl;
}

void Animal::makeSound(void) {
	if (_name == "Dog")
		std::cout << "Bark!" << std::endl;
	else if (_name == "Cat")
		std::cout << "Meow!" << std::endl;
	else
		std::cout << "Intangible sound." << std::endl;
}
