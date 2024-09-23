/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 08:57:15 by masoares          #+#    #+#             */
/*   Updated: 2024/05/08 08:45:28 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>

std:: string ft_toupper(std:: string &str)
{
    for(int i = 0; str[i]; i++)
        str[i] = std::toupper(str[i]);
    return (str);
}


int main(int ac, char **av)
{
    (void) ac;
    if (av[1] == NULL)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return(0);
    }
    for(int i = 1; av[i]; i++)
    {
        std::string cap = (std::string) av[i];
        cap = ft_toupper(cap);
        if (av[i + 1] == NULL)
        {
            std::cout << cap;
            break;
        }
        std::cout << cap << " ";
    }
    std::cout << std::endl;
}