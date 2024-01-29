#include "Dog.hpp"

Dog::Dog(void): Animal() {
	_brain = new (Brain);
	_name = "Dog";
}

Dog::~Dog() {
	delete (_brain);
}