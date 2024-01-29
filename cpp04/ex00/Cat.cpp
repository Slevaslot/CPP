#include "Cat.hpp"

Cat::Cat(void): Animal() {
	std::cout << "Cat Constructor called" << std::endl;
	_name = "Cat";
}