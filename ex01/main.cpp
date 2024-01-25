/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:18:46 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/25 16:30:58 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
