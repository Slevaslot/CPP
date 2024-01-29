#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	Animal *animals[20];

	int i = 0;
	while (++i < 20)
	{
		if (i % 2 == 0)
			animals[i] = new Cat();
		if (i % 2 == 1)
			animals[i] = new Dog();
		animals[i]->makeSound();
	}
	i = 0;
	while (++i < 20)
		delete(animals[i]);
}
