/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 11:02:24 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 20:37:39 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie;
    try{
        zombie = new Zombie[N];
    }
    catch(std::bad_alloc&){
        std::cerr << "Error: bad allocation, try a lower number" << std::endl;     
        return NULL;
    }
    for (int i = 0; i < N; i++)
    {
        zombie[i].set_name(name);
        zombie[i].announce();
    }
    return(zombie);
}
