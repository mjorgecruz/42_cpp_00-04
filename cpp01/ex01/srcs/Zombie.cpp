/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:05:12 by masoares          #+#    #+#             */
/*   Updated: 2024/05/08 10:52:52 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name;
    std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie::Zombie(std::string name)
{
    set_name(name);
}
Zombie::Zombie( void )
{
}
Zombie::~Zombie( void )
{
    std::cout << name;
    std::cout << " died again" << std::endl;
}
