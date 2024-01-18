#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Default Constructor called" << std::endl;
	_name = "Default";
	_hp = 10;
	_ep = 10;
	_ad = 0;
}

ClapTrap::ClapTrap(std::string name) {
	std::cout << "Name Constructor called" << std::endl;
	_name = name;
	_hp = 10;
	_ep = 10;
	_ad = 0;
}

ClapTrap::ClapTrap(ClapTrap &Clap) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = Clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &Clap) {
	this->_name = Clap._name;
	this->_hp = Clap._hp;
	this->_ep = Clap._ep;
	this->_ad = Clap._ad;
	return (*this);
}

std::string ClapTrap::getName() {
	return (_name);
}

unsigned int ClapTrap::getHp() {
	return (_hp);
}

unsigned int ClapTrap::getEp() {
	return (_ep);
}

unsigned int ClapTrap::getAd() {
	return (_ad);
}

void ClapTrap::setName(std::string name) {
	_name = name;
}

void ClapTrap::setHp(unsigned int hp) {
	_hp = hp;
}

void ClapTrap::setEp(unsigned int ep) {
	_ep = ep;
}

void ClapTrap::setAd(unsigned int ad) {
	_ad = ad;
}

void ClapTrap::attack(const std::string &target) {
	if (_hp == 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else if (_ep == 0)
		std::cout << "ClapTrap " << _name << " does not have enough energy points." << std::endl;
	else {
		--_ep;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _ad << " points of damage !" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp == 0)
		std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
	else {
		std::cout << "ClapTrap " << _name << " is attacked, losing " << amount << " points of damage !" << std::endl;
		if (_hp > amount)
			_hp = _hp - amount;
		else
		{
			_hp = 0;
			std::cout << "ClapTrap " << _name << " is now dead. " << std::endl;
		}
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hp == 0)
		std::cout << "ClapTrap " << _name << " is dead." << std::endl;
	else if (_ep == 0)
		std::cout << "ClapTrap " << _name << " does not have enough energy points." << std::endl;
	else
	{
		--_ep;
		unsigned int tmp = _hp + amount;
		if (tmp > 10) {
			tmp = 10 - _hp;
			_hp = 10;
		}
		else
		{
			_hp += amount;
			tmp = amount;
		}
	}
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}
