/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:24:52 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 20:37:18 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"

int main ()
{
    int N = 10;
    Zombie *zz = zombieHorde(N, "lelo");
    if (zz == NULL) 
        return (1);
    for (int i = 0; i < N; i++)
        zz[i].announce();
    delete[] zz;
}