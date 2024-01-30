#include "Zombie.hpp"

int main(void)
{
    Zombie *Zombies;

    Zombies = newZombie("Pablo");
    Zombies->announce();
    delete(Zombies);
    randomChump("Albert");
    Zombies = newZombie("Souleimane");
    Zombies->announce();
    delete(Zombies);
    randomChump("Mathieu");
    return (0);
}
