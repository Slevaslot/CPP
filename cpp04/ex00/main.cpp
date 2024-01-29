#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	Animal *animal1 = new Dog();
	Animal *animal2 = new Cat();
	Animal *animal3 = new Animal();


	std::cout << animal1->getType() << std::endl;
	animal1->makeSound();
	std::cout << animal2->getType() << std::endl;
	animal2->makeSound();
	std::cout << animal3->getType() << std::endl;
	animal3->makeSound();
	delete (animal1);
	delete (animal2);
	delete (animal3);
}
