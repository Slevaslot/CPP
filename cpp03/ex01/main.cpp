#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap test("Test");
	std::cout << test.getName() << std::endl;
	std::cout << test.getHp() << std::endl;
	std::cout << test.getEp() << std::endl;
	std::cout << test.getAd() << std::endl;
}
