#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
    Zombie *newhorde = new Zombie;

    while(N-- != 0)
        newhorde->setName(name);
    return (&newhorde[0]);
}