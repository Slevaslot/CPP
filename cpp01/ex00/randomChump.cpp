#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie *random;

    random = newZombie(name);
    random->announce();
    delete(random);
}

