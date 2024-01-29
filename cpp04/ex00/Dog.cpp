#include "Dog.hpp"

Dog::Dog(void): Animal() {
	std::cout << "Dog Constructor called" << std::endl;
	_name = "Dog";
}