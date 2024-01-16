#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
    Zombie *newhorde = new Zombie[N];

    if (N < 1)
        return (NULL);
    for (int i = 0; i < N; i++)
        newhorde[i].setName(name);
    return (&newhorde[0]);
}
