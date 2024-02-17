#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	_name = "Unknown WrongAnimal";
	std::cout << "Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & ani) {
	*this = ani;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const & ani) {
	_name = ani._name;
	return (*this);
}

std::string WrongAnimal::getType() {
	return (_name);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) {
	if (_name == "Cow")
		std::cout << "Moo..." << std::endl;
	else
		std::cout << "Intangible sound." << std::endl;
}
