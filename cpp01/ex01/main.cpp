#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombies;
    long unsigned int N;

    N = 3;
    Zombies = zombieHorde(N, "Boup");
    for (long unsigned int i = 0; i != N; i++)
    {
        Zombies[i].announce();
    }
    delete(Zombies);
    return (0);
}