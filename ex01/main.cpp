/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:18:46 by emukamada         #+#    #+#             */
/*   Updated: 2023/12/21 16:11:08 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap claptrap("Clap A");
    ScavTrap scavtrap("Scav B");
    scavtrap.attack("goblin");
    claptrap.attack("goblin");
    scavtrap.takeDamage(3);
    claptrap.takeDamage(3);
    scavtrap.attack("goblin");
    claptrap.attack("goblin");
    scavtrap.beRepaired(2);
    claptrap.beRepaired(2);
    scavtrap.attack("goblin");
    claptrap.attack("goblin");
    scavtrap.beRepaired(2);
    claptrap.beRepaired(2);
    scavtrap.attack("goblin");
    claptrap.attack("goblin");
    scavtrap.beRepaired(2);
    scavtrap.guardGate();
    claptrap.beRepaired(2);
    scavtrap.attack("goblin");
    claptrap.attack("goblin");
    scavtrap.beRepaired(2);
    claptrap.beRepaired(2);
    scavtrap.takeDamage(3);
    scavtrap.takeDamage(3);
    claptrap.takeDamage(3);
    scavtrap.takeDamage(3);
    scavtrap.takeDamage(3);
    scavtrap.takeDamage(3);
}
