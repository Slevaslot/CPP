#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap : Default constructor called" << std::endl;
	_name = "Default";
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << "ScavTrap : Default constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

ScavTrap::~ScavTrap(): ~ClapTrap() {
	std::cout << "Scavtrap : Destructor called" << std::endl;
}

std::string ScavTrap::getName() {
	return (_name);
}

unsigned int ScavTrap::getHp() {
	return (_hp);
}

unsigned int ScavTrap::getEp() {
	return (_ep);
}

unsigned int ScavTrap::getAd() {
	return (_ad);
}

void ScavTrap::setName(std::string name) {
	_name = name;
}

void ScavTrap::setHp(unsigned int hp) {
	_hp = hp;
}

void ScavTrap::setEp(unsigned int ep) {
	_ep = ep;
}

void ScavTrap::setAd(unsigned int ad) {
	_ad = ad;
}
