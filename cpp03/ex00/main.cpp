#include "ClapTrap.hpp"

int main(void) {
	ClapTrap test("Test");
	test.attack("A Blue-eyes white dragon");
	test.takeDamage(9);
	test.beRepaired(20);
	test.takeDamage(10);
	test.takeDamage(10);
	test.beRepaired(1);
	std::cout << std::endl << "Test's son seeks revenge" << std::endl << std::endl;
	ClapTrap testson("Test's son");
	testson.setAd(1);
	testson.attack("A Blue-eyes white dragon");
	testson.attack("A Blue-eyes white dragon");
	testson.attack("A Blue-eyes white dragon");
	testson.attack("A Blue-eyes white dragon");
	testson.attack("A Blue-eyes white dragon");
	testson.attack("A Blue-eyes white dragon");
	testson.attack("A Blue-eyes white dragon");
	testson.attack("A Blue-eyes white dragon");
	testson.takeDamage(7);
	testson.beRepaired(8);
	std::cout << testson.getName() << " has " << testson.getHp() << " hp left." << std::endl;
	testson.attack("A Blue-eyes white dragon");
	testson.attack("A Blue-eyes white dragon");
	std::cout << testson.getName() << " is exhausted" << std::endl;
	testson.takeDamage(3000);
	std::cout << "The test lineage has been oblirated" << std::endl;
}
