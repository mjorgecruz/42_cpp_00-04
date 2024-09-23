/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:24:52 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 20:42:56 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

int main (int ac, char **av)
{
    (void) av;
    if (ac == 1)
    {
        Zombie z1;
        z1.set_name("lelito");
        z1.announce();
    }
    else if (ac == 2)
    {
        randomChump("lol");
        randomChump("");

    }
    else if (ac == 3)
    {
        Zombie z1;
        Zombie *z2;
        z1.set_name(av[2]);
        z1.announce();
        z2 = newZombie(av[1]);
        if (z2)
            delete z2; 
    }
    else
        std::cout << "The horde is too big" << std::endl;
}