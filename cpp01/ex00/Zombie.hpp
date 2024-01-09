#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <new>

class Zombie {
	private:
	std::string	name;

  public:
    std::string getName() {
      return name;
    }
    void setName(std::string str) {
    	name = str;
    }
    void announce(void);
    ~Zombie()
    {
      std::cout << this->name << " is dead!" << std::endl;
    }
};

  Zombie  *newZombie( std::string name );
  void randomChump( std::string name );
#endif