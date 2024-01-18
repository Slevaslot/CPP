#include "Animal.hpp"

int main(void) {
	Animal *animal1;
	Animal *animal2;
	Animal *animal3;

	animal1 = new Dog();
	animal2 = new Cat();
	std::cout << animal1->getType() << std::endl;
	animal1->makeSound();
	std::cout << animal2->getType() << std::endl;
	animal2->makeSound();
	delete (animal1);
	delete (animal2);
}
