#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("Clap A");
    ScavTrap scavtrap("Scav B");
    std::cout << std::endl;
    claptrap.attack("goblin");
    claptrap.takeDamage(3);
    claptrap.beRepaired(2);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.takeDamage(3);
    claptrap.attack("goblin");
    std::cout << std::endl;
    scavtrap.takeDamage(3);
    scavtrap.beRepaired(2);
    scavtrap.takeDamage(3);
    scavtrap.takeDamage(3);
    scavtrap.takeDamage(3);
    scavtrap.attack("goblin");
    scavtrap.guardGate();
    scavtrap.takeDamage(50);
    scavtrap.takeDamage(50);
    scavtrap.guardGate();
}
