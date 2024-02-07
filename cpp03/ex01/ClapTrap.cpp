#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	std::cout << "Default Constructor called" << std::endl;
	_name = "Default";
	_hp = 10;
	_ep = 10;
	_ad = 0;
	_maxHp = _hp;

}

ClapTrap::ClapTrap(const std::string name) {
	std::cout << "Name Constructor called" << std::endl;
	_name = name;
	_hp = 10;
	_ep = 10;
	_ad = 0;
	_maxHp = _hp;
}

ClapTrap::ClapTrap(const ClapTrap &Clap) {
	std::cout << "Copy Constructor called" << std::endl;
	*this = Clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &Clap) {
	this->_name = Clap._name;
	this->_hp = Clap._hp;
	this->_ep = Clap._ep;
	this->_ad = Clap._ad;
	this->_maxHp = Clap._maxHp;
	return (*this);
}

std::string ClapTrap::getName() const{
	return (_name);
}

unsigned int ClapTrap::getHp() const{
	return (_hp);
}

unsigned int ClapTrap::getEp() const{
	return (_ep);
}

unsigned int ClapTrap::getAd() const{
	return (_ad);
}

void ClapTrap::setName(const std::string name) {
	_name = name;
}

void ClapTrap::setHp(const unsigned int hp) {
	_hp = hp;
}

void ClapTrap::setEp(const unsigned int ep) {
	_ep = ep;
}

void ClapTrap::setAd(const unsigned int ad) {
	_ad = ad;
}

void ClapTrap::attack(const std::string &target) {
	if (_hp == 0)
		std::cout << _name << " is dead." << std::endl;
	else if (_ep == 0)
		std::cout << _name << " does not have enough energy points." << std::endl;
	else {
		--_ep;
		std::cout << _name << " attacks " << target << ", causing " << _ad << " points of damage !" << std::endl;
	}
}

void ClapTrap::takeDamage(const unsigned int amount)
{
	if (_hp == 0)
		std::cout << _name << " is already dead." << std::endl;
	else {
		std::cout << _name << " is attacked, losing " << amount << " points of damage !" << std::endl;
		if (_hp > amount)
			_hp = _hp - amount;
		else
		{
			_hp = 0;
			std::cout << _name << " is now dead. " << std::endl;
		}
	}
}

void ClapTrap::beRepaired(const unsigned int amount) {
	if (_hp == 0)
		std::cout << _name << " is dead." << std::endl;
	else if (_ep == 0)
		std::cout << _name << " does not have enough energy points." << std::endl;
	else
	{
		--_ep;
		unsigned int tmp = _hp + amount;
		if (tmp > _maxHp) {
			tmp = _maxHp - _hp;
			_hp = _maxHp;
		}
		else
		{
			_hp += amount;
			tmp = amount;
		}
		std::cout << _name << " repairs himself, gaining " << tmp << " health point(s) !" << std::endl;
	}
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor called" << std::endl;
}
