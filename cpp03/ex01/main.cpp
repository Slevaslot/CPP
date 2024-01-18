#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap test1("Fighter 1");

	ScavTrap test2("Fighter 2");

	test1.attack("Fighter 2");
	test2.takeDamage(20);
	test2.beRepaired(15);
	test1.guardGate();
	test2.attack("Fighter 1");
	test1.takeDamage(20);

	std::cout << "Fighter 1's hp : " << test1.getHp() << std::endl;
	std::cout << "Fighter 2's hp : " << test2.getHp() << std::endl;
}
