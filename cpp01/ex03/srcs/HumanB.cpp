/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:36:03 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 10:31:49 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanB.hpp"

void HumanB::attack( void )
{
    std::cout << name << " attack with their ";
    if (weapon == NULL)
    {
        std::cout << "BARE HANDSSSS!!...And died...";
        return ;
    }
    std::cout << this->weapon->getType() << std::endl;
    
}

void HumanB::setWeapon(Weapon &weapon)
{
    (this->weapon) = &weapon;
}
HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon &weapon)
{
    this->name = name;
    setWeapon(weapon);
}
