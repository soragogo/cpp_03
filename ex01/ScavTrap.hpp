#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap :public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(const ScavTrap &scavtrap);
        ScavTrap &operator=(ScavTrap &scavtrap);
        ScavTrap(std::string name);
        void guardGate();
        void attack(const std::string& target);
};

#endif
