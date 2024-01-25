#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap :public ClapTrap
{
    public:
        FragTrap();
        ~FragTrap();
        FragTrap(const FragTrap &fragtrap);
        FragTrap &operator=(FragTrap &fragtrap);
        FragTrap(std::string name);
        void highFivesGuys(void);
        void attack(const std::string& target);
        int getHitPoints();
        int getEnergyPoints();
};

#endif
