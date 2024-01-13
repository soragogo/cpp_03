/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:18:46 by emukamada         #+#    #+#             */
/*   Updated: 2023/12/21 16:36:47 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("A");
    FragTrap b = a;
    a.attack("a's enemy");
    a.takeDamage(20);
    a.beRepaired(2);
    a.takeDamage(20);
    a.beRepaired(2);
    a.takeDamage(20);
    a.takeDamage(20);
    a.takeDamage(20);
    a.takeDamage(20);
    std::cout << "a's hit_point: " << a.getHitPoints() << std::endl;
    std::cout << "a's energy_point: " << a.getEnergyPoints() << std::endl;
    a.takeDamage(20);
    a.beRepaired(2);
    a.attack("a's enemy");
}
