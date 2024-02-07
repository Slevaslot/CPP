#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {
	Animal *animal1 = new Dog();
	Animal *animal2 = new Cat();
	Animal *animal3 = new Animal();
	WrongAnimal *animal4 = new WrongCat();

	std::cout << animal1->getType() << std::endl;
	animal1->makeSound();
	std::cout << animal2->getType() << std::endl;
	animal2->makeSound();
	std::cout << animal3->getType() << std::endl;
	animal3->makeSound();
	std::cout << animal4->getType() << std::endl;
	animal4->makeSound();
	delete (animal1);
	delete (animal2);
	delete (animal3);
	delete (animal4);
}
