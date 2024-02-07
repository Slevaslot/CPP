#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	_name = "Unknown anmal";
	// std::cout << "Default Constructor called" << std::endl;
}

std::string WrongAnimal::getType() {
	return (_name);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Destructor called" << std::endl;
}

void WrongAnimal::makeSound(void) {
	if (_name == "Cow")
		std::cout << "Mooo" << std::endl;
	else
		std::cout << "Intangible sound." << std::endl;
}
