/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 16:09:01 by emukamada         #+#    #+#             */
/*   Updated: 2023/12/21 16:35:20 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
