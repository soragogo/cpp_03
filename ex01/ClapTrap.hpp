/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 15:18:43 by emukamada         #+#    #+#             */
/*   Updated: 2023/12/21 15:56:06 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

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
    protected:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
};


