/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:30:36 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 10:28:50 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "HumanA.hpp"

void HumanA::attack( void )
{
    std::cout << name << " attack with their ";
    std::cout << weapon.getType() << std::endl; 
}

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon), name(name)
{}