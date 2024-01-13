#include "ClapTrap.hpp"

int main()
{
    std::srand(std::time(nullptr));
    ClapTrap claptrap("A");
    claptrap.attack("goblin");
    claptrap.takeDamage(3);
    claptrap.attack("goblin");
    claptrap.beRepaired(2);
    claptrap.attack("goblin");
    claptrap.beRepaired(2);
    claptrap.attack("goblin");
    claptrap.beRepaired(2);
    claptrap.attack("goblin");
    claptrap.beRepaired(2);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
}
