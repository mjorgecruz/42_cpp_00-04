/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:22:55 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 20:48:13 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Weapon.hpp"

const std::string &Weapon::getType()
{
    return(type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}
Weapon::Weapon(){}
Weapon::~Weapon(){}

Weapon::Weapon(std::string type)
{
    setType(type);
}