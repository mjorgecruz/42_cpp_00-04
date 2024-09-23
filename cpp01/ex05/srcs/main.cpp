/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:24:52 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 18:43:15 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Harl.hpp"

int main(int ac, char **av)
{
    int i = 1;
    Harl complaining;
    
    (void) ac;
    while (av[i])
    {
        complaining.complain((std::string)av[i]);
        i++;
    }
}


