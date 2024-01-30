#include "ClapTrap.hpp"

int main(void) {
	ClapTrap test("Test");
	test.attack("A Blue-eyes white dragon");
	test.takeDamage(9);
	test.beRepaired(20);
	test.takeDamage(10);
	test.takeDamage(10);
	test.beRepaired(1);
}
