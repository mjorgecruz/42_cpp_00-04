/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:08:20 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 18:38:27 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Harl.hpp"

void Harl::complain(std::string level)
{
    TYPE all[] = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
    
    std::string comparer[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    
    for (unsigned long i = 0; i < comparer->length(); i++)
    {
        if (comparer[i] == level)
        {
            (this->*all[i])();
            return ;
        }    
    }
    std::cout << "I feel nothing..." << std::endl;
}

void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!"<< std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." <<std::endl;
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
