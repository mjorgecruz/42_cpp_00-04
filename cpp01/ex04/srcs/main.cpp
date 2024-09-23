/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:24:52 by masoares          #+#    #+#             */
/*   Updated: 2024/05/10 10:28:49 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Sed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "Number of arguments invalid please input \"./Sed <filename> <string_to_find> <string_replacer> " << std::endl;
        return 0;
    }
    worker(av[2], av[3], av[1]);
}
