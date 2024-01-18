#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap() {
	std::cout << "ScavTrap : Default constructor called" << std::endl;
	_name = "Default";
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << "ScavTrap : Name constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

ScavTrap::ScavTrap(ScavTrap &Scav): ClapTrap(Scav) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = Scav;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &Scav) {
	this->_name = Scav._name;
	this->_hp = Scav._hp;
	this->_ep = Scav._ep;
	this->_ad = Scav._ad;
	return (*this);
}

ScavTrap::~ScavTrap() {
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

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << _name << " is now in GateKeeper mode" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
	if (_hp == 0)
		std::cout << "ScavTrap " << _name << " is dead." << std::endl;
	else if (_ep == 0)
		std::cout << "ScavTrap " << _name << " does not have enough energy points." << std::endl;
	else {
		--_ep;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage !" << std::endl;
	}
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if (_hp == 0)
		std::cout << "ScavTrap " << _name << " is already dead." << std::endl;
	else {
		std::cout << "ScavTrap " << _name << " is attacked, losing " << amount << " points of damage !" << std::endl;
		if (_hp > amount)
			_hp = _hp - amount;
		else
		{
			_hp = 0;
			std::cout << "ScavTrap " << _name << " is now dead. " << std::endl;
		}
	}
}

void ScavTrap::beRepaired(unsigned int amount) {
	if (_hp == 0)
		std::cout << "ScavTrap " << _name << " is dead." << std::endl;
	else if (_ep == 0)
		std::cout << "ScavTrap " << _name << " does not have enough energy points." << std::endl;
	else
	{
		--_ep;
		unsigned int tmp = _hp + amount;
		if (tmp > 100) {
			tmp = 100 - _hp;
			_hp = 100;
		}
		else
		{
			_hp += amount;
			tmp = amount;
		}
		std::cout << "ScavTrap " << _name << " repairs himself, gaining " << tmp << " health point(s) !" << std::endl;
	}
}
