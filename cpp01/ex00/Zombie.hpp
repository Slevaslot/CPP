#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>
#include <new>

class Zombie {
	private:
	  std::string	name;

  public:
    std::string getName();
    void setName(std::string str);
    void announce(void);
    ~Zombie();
};
  Zombie  *newZombie( std::string name );
  void randomChump( std::string name );

#endif
