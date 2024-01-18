#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap : Default constructor called" << std::endl;
	_name = "Default";
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap : Name constructor called" << std::endl;
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 20;
}

FragTrap::FragTrap(FragTrap &Frag): ClapTrap(Frag) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = Frag;
}

FragTrap &FragTrap::operator=(const FragTrap &Frag) {
	this->_name = Frag._name;
	this->_hp = Frag._hp;
	this->_ep = Frag._ep;
	this->_ad = Frag._ad;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap : Destructor called" << std::endl;
}

std::string FragTrap::getName() {
	return (_name);
}

unsigned int FragTrap::getHp() {
	return (_hp);
}

unsigned int FragTrap::getEp() {
	return (_ep);
}

unsigned int FragTrap::getAd() {
	return (_ad);
}

void FragTrap::setName(std::string name) {
	_name = name;
}

void FragTrap::setHp(unsigned int hp) {
	_hp = hp;
}

void FragTrap::setEp(unsigned int ep) {
	_ep = ep;
}

void FragTrap::setAd(unsigned int ad) {
	_ad = ad;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap's highFive request is accepted" << std::endl;
}

void FragTrap::attack(const std::string &target) {
	if (_hp == 0)
		std::cout << "FragTrap " << _name << " is dead." << std::endl;
	else if (_ep == 0)
		std::cout << "FragTrap " << _name << " does not have enough energy points." << std::endl;
	else {
		--_ep;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage !" << std::endl;
	}
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (_hp == 0)
		std::cout << "FragTrap " << _name << " is already dead." << std::endl;
	else {
		std::cout << "FragTrap " << _name << " is attacked, losing " << amount << " points of damage !" << std::endl;
		if (_hp > amount)
			_hp = _hp - amount;
		else
		{
			_hp = 0;
			std::cout << "FragTrap " << _name << " is now dead. " << std::endl;
		}
	}
}

void FragTrap::beRepaired(unsigned int amount) {
	if (_hp == 0)
		std::cout << "FragTrap " << _name << " is dead." << std::endl;
	else if (_ep == 0)
		std::cout << "FragTrap " << _name << " does not have enough energy points." << std::endl;
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
		std::cout << "FragTrap " << _name << " repairs himself, gaining " << tmp << " health point(s) !" << std::endl;
	}
}
