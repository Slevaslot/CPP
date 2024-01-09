#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombies;
    long unsigned int N;

    N = 3;
    Zombies = zombieHorde(N, "Boup");
    // for (long unsigned int i; i != N; i++)
    // {
    // }
    delete(Zombies);
    return (0);
}