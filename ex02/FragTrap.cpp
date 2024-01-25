#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "[FragTrap] Constructor called" << std::endl;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "[FragTrap] Constructor called on " << name << std::endl;
    this->name = name;
    hit_points = 100;
    energy_points = 100;
    attack_damage = 30;
}

FragTrap &FragTrap::operator=(FragTrap &fragtrap)
{
    if (this != &fragtrap)
    {
        this->name = fragtrap.name;
        this->hit_points = fragtrap.hit_points;
        this->energy_points = fragtrap.energy_points;
        this->attack_damage = fragtrap.attack_damage;
    }
    return *this;
}

FragTrap::FragTrap(const FragTrap &fragtrap) :ClapTrap(fragtrap)
{
    name = fragtrap.name;
    hit_points = fragtrap.hit_points;
    energy_points = fragtrap.energy_points;
    attack_damage = fragtrap.attack_damage;
}

void FragTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout << "[FragTrap]" << name << " attacks " << target;
        std::cout << ", causing " << attack_damage << " points of damage!" << std::endl;
        energy_points --;
    }
    if (hit_points <= 0 || energy_points <= 0)
        std::cout << name << " cannot fight any more!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout << "Guys, high five!!!" << std::endl;
    }
    if (hit_points <= 0 || energy_points <= 0)
        std::cout << name << " cannot do a high five due to low hit points or energy." << std::endl;
}

int FragTrap::getHitPoints()
{
    return hit_points;
}

int FragTrap::getEnergyPoints()
{
    return energy_points;
}

FragTrap::~FragTrap()
{
    std::cout << "[FragTrap]" << "Destructor called on " << name << std::endl;
}
