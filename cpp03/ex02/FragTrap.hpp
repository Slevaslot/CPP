#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <new>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public :
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &Frag);
	~FragTrap();
	FragTrap &operator=(const FragTrap &Frag);
	std::string getName();
	unsigned int getHp();
	unsigned int getEp();
	unsigned int getAd();
	void setName(std::string name);
	void setHp(unsigned int hp);
	void setEp(unsigned int ep);
	void setAd(unsigned int ad);
	void highFivesGuys();
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif
