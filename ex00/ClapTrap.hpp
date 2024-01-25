#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap &claptrap);
        ClapTrap &operator=(ClapTrap &claptrap);
        ClapTrap(std::string name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
    private:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
};

#endif
