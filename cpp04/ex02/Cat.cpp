#include "Cat.hpp"

Cat::Cat(void): Animal() {
	_brain = new (Brain);
	_name = "Cat";
}

Cat::~Cat() {
	delete (_brain);
}