#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("A");
    claptrap.takeDamage(3);
    claptrap.attack("goblin");
    claptrap.attack("goblin");
    claptrap.attack("goblin");
    claptrap.beRepaired(2);
    claptrap.beRepaired(2);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
}
