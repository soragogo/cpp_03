/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:18:46 by emukamada         #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/21 14:36:23 by ekamada          ###   ########.fr       */
=======
/*   Updated: 2024/01/25 16:33:10 by emukamada        ###   ########.fr       */
>>>>>>> 64bbfda (dekita)
/*                                                                            */
/* ************************************************************************** */

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
