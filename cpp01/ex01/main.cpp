#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombies;
    long unsigned int N;

    N = 4;
    Zombies = zombieHorde(5, "Boup");
    for (long unsigned int i = 0; i != N; i++)
        Zombies[i].announce();
    delete[](Zombies);
    return (0);
}
