#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
    Zombie *newhorde = new Zombie;

    for (int i = 0; i < N; i++)
        newhorde[i].setName(name);
    return (&newhorde[0]);
}