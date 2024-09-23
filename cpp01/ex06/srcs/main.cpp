/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:24:52 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 21:12:55 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl complaining;
    std::string str;

    if (ac != 2)
    {
        std::cout << "Wrong input. Please write: \" ./harlFilter <message> \"" << std::endl;
        return (1);
    }
    str = av[1];
    if (str != "DEBUG" && str != "INFO" && str != "WARNING" && str != "ERROR")
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return (2);
    }
    switch (av[1][0])
    {
        case 'D':
            complaining.complain("DEBUG");
            std::cout << std::endl;
        case 'I':
            complaining.complain("INFO");
            std::cout << std::endl;
        case 'W':
            complaining.complain("WARNING");
            std::cout << std::endl;
        case 'E':
            complaining.complain("ERROR");
            std::cout << std::endl;
        break;
    }
}


