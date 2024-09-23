/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:12:55 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 20:42:03 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *zombie;
    try{
        zombie = new Zombie(name);
    }
    catch(std::bad_alloc&){
        std::cerr << "Error bad_alloc" << std::endl;
        return(NULL);
    }
    return(zombie);
}