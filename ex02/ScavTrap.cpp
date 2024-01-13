/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:18:56 by emukamada         #+#    #+#             */
/*   Updated: 2023/12/21 16:34:11 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "[ScavTrap] Constructor called on " << name << std::endl;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "[ScavTrap] Constructor called on " << name << std::endl;
    this->name = name;
    hit_points = 100;
    energy_points = 50;
    attack_damage = 20;
}

ScavTrap &ScavTrap::operator=(ScavTrap &scavtrap)
{
    if (this != &scavtrap)
    {
        this->name = scavtrap.name;
        this->hit_points = scavtrap.hit_points;
        this->energy_points = scavtrap.energy_points;
        this->attack_damage = scavtrap.attack_damage;
    }
    return *this;
}

ScavTrap::ScavTrap(const ScavTrap &scavtrap)
{
    name = scavtrap.name;
    hit_points = scavtrap.hit_points;
    energy_points = scavtrap.energy_points;
    attack_damage = scavtrap.attack_damage;
}

void ScavTrap::attack(const std::string& target)
{
    if (hit_points > 0 && energy_points > 0)
    {
        std::cout << "[ScavTrap]"  << name << " attacks " << target;
        std::cout << ", causing " << attack_damage << " points of damage!" << std::endl;
        energy_points --;
    }
    if (hit_points <= 0 || energy_points <= 0)
        std::cout << name << " cannot fight any more!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << name << " is now in guard-gate mode." << std::endl;
}


ScavTrap::~ScavTrap()
{
    std::cout << "[ScavTrap]" << "Destructor called on " << name << std::endl;
}

