#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Constructor called on " << name << std::endl;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructor called on " << name << std::endl;
    this->name = name;
    hit_points = 10;
    energy_points = 10;
    attack_damage = 0;
}

ClapTrap &ClapTrap::operator=(ClapTrap &claptrap)
{
    if (this != &claptrap)
    {
        this->name = claptrap.name;
        this->hit_points = claptrap.hit_points;
        this->energy_points = claptrap.energy_points;
        this->attack_damage = claptrap.attack_damage;
    }
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &claptrap)
{
    name = claptrap.name;
    hit_points = claptrap.hit_points;
    energy_points = claptrap.energy_points;
    attack_damage = claptrap.attack_damage;
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout  << name << " attacks " << target;
        std::cout << ", causing " << attack_damage << " points of damage!" << std::endl;
        energy_points --;
    }
    if (hit_points <= 0 || energy_points <= 0)
        std::cout << name << " cannot fight any more!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout << name << " is being attacked!";
        std::cout << " Got " << amount << " points of damage!" << std::endl;
        hit_points -= amount;
    }
    if (hit_points <= 0 || energy_points <= 0)
        std::cout << name << " has already been beaten up!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout << name << " is being repaired and recovered by " << amount << " points!" << std::endl;
        energy_points --;
        hit_points += amount;
    }
    if (hit_points <= 0 || energy_points <= 0)
    {
        std::cout << name << " has run out of hit points or energy points." << std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}
