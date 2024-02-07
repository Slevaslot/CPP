#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
	FragTrap test1("test1");

	ScavTrap test2("test2");
	test1.highFivesGuys();
	test2.guardGate();
	test2.attack("test1");
	test1.takeDamage(20);
	test1.attack("test2");
	test2.takeDamage(30);
	test2.beRepaired(19);
	test1.attack("test2");
	test2.takeDamage(30);
	test1.attack("test2");
	test2.takeDamage(30);
	test1.attack("test2");
	std::cout << "Fighter 1's hp : " << test1.getHp() << std::endl;
	std::cout << "Fighter 2's hp : " << test2.getHp() << std::endl;
}
