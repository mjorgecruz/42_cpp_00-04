/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils2.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:44:48 by masoares          #+#    #+#             */
/*   Updated: 2024/05/07 19:22:32 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "PhoneBook.hpp"

int start_up()
{
	std::cout<< " _______________________________________ " << std::endl;
	std::cout<< "|                                       |" << std::endl;
	std::cout<< "|		PHONEBOOK		|" << std::endl;
	std::cout<< "|_______________________________________|" << std::endl;
	std::cout<< "|             |            |            |" << std::endl;
	std::cout<< "|     ADD     |   SEARCH   |    EXIT    |" << std::endl;
	std::cout<< "|_____________|____________|____________|" << std::endl;
	std::cout<< std::endl;
	std::cout << "DEFINE ACTION : " <<std::endl;
	return (0);
}

int start_add()
{
	std::cout<< " _______________________________________ " << std::endl;
	std::cout<< "|                                       |" << std::endl;
	std::cout<< "|		PHONEBOOK		|" << std::endl;
	std::cout<< "|_______________________________________|" << std::endl;
	std::cout<< "|             |            |            |" << std::endl;
	std::cout<< "|";
	std::cout<< "     \033[1;32mADD\033[0m     ";
	std::cout<< "|";
	std::cout<< "   SEARCH   ";
	std::cout<< "|";
	std::cout<< "    EXIT    ";
	std::cout<< "|" << std::endl;
	std::cout<< "|_____________|____________|____________|" << std::endl;
	std::cout<< std::endl;
	return (0);
}

int start_search()
{
	std::cout<< " _______________________________________ " << std::endl;
	std::cout<< "|                                       |" << std::endl;
	std::cout<< "|		PHONEBOOK		|" << std::endl;
	std::cout<< "|_______________________________________|" << std::endl;
	std::cout<< "|             |            |            |" << std::endl;
	std::cout<< "|";
	std::cout<< "     ADD     ";
	std::cout<< "|";
	std::cout<< "   \033[1;32mSEARCH\033[0m   ";
	std::cout<< "|";
	std::cout<< "    EXIT    ";
	std::cout<< "|" << std::endl;
	std::cout<< "|_____________|____________|____________|" << std::endl;
	std::cout<< std::endl;
	return (0);
}

int start_exit()
{
	std::cout<< " _______________________________________ " << std::endl;
	std::cout<< "|                                       |" << std::endl;
	std::cout<< "|		PHONEBOOK		|" << std::endl;
	std::cout<< "|_______________________________________|" << std::endl;
	std::cout<< "|             |            |            |" << std::endl;
	std::cout<< "|";
	std::cout<< "     ADD     ";
	std::cout<< "|";
	std::cout<< "   SEARCH   ";
	std::cout<< "|";
	std::cout<< "    \033[1;31mEXIT\033[0m    ";
	std::cout<< "|" << std::endl;
	std::cout<< "|_____________|____________|____________|" << std::endl;
	std::cout<< std::endl;
	return (0);
}
