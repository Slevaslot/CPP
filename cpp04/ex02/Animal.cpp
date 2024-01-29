#include "Animal.hpp"

Animal::Animal(void) {
	_name = "Unknown animal";
}

std::string Animal::getType() {
	return (_name);
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
