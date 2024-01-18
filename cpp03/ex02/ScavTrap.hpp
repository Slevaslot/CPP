#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <new>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public :
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &Scav);
	~ScavTrap();
	ScavTrap &operator=(const ScavTrap &Scav);
	std::string getName();
	unsigned int getHp();
	unsigned int getEp();
	unsigned int getAd();
	void setName(std::string name);
	void setHp(unsigned int hp);
	void setEp(unsigned int ep);
	void setAd(unsigned int ad);
	void guardGate();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
