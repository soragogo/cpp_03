#include "FragTrap.hpp"

int main()
{
    FragTrap a("A");
    FragTrap b = a;
    a.attack("a's enemy");
    a.highFivesGuys();
    a.takeDamage(20);
    a.beRepaired(2);
    a.takeDamage(20);
    a.beRepaired(2);
    a.takeDamage(80);
    std::cout << "a's hit_point: " << a.getHitPoints() << std::endl;
    std::cout << "a's energy_point: " << a.getEnergyPoints() << std::endl;
    a.takeDamage(20);
    a.beRepaired(2);
    a.attack("a's enemy");
    a.highFivesGuys();
}
