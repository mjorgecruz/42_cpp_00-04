/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils3.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:50:57 by masoares          #+#    #+#             */
/*   Updated: 2024/05/10 08:43:56 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "PhoneBook.hpp"

void PhoneBook::action_add(Contact *contact)
{
	(*contact).set_phone_number();
	(*contact).set_first_name();
	(*contact).set_last_name();
	(*contact).set_nickname();
	(*contact).set_darkest();
	i++;
	if (i == 8)
	{
		i = 0;
		full = 1;
	}
}

void PhoneBook::action_search()
{
	int j = 0;
	std::cout<< " ___________________________________________ " << std::endl;
	std::cout<< "|                                           |" << std::endl;
	std::cout<< "|                 PHONEBOOK                 |" << std::endl;
	std::cout<< "|___________________________________________|" << std::endl;
	std::cout<< "|          |          |          |          |" << std::endl;
	std::cout<< "|";
	std::cout<< "INDEX     ";
	std::cout<< "|";
	std::cout<< "FIRST NAME";
	std::cout<< "|";
	std::cout<< "LAST NAME ";
	std::cout<< "|";
	std::cout<< "NICKNAME  ";
	std::cout<< "|" << std::endl;
	std::cout<< "|__________|__________|__________|__________|" << std::endl;
	if (i < 8 && !full)
	{
		while (j < i)
		{
			std::cout<< "|          |          |          |          |" << std::endl;
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << j + 1;
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << trim(contacts[j].get_first_name());
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << trim(contacts[j].get_last_name());
			std::cout<< "|";
			std::cout<<  std::right << std::setw(10) << trim(contacts[j].get_nickname());
			std::cout<< "|" << std::endl;
			std::cout<< "|__________|__________|__________|__________|" << std::endl;
			j++;
		}
	}
	else
	{
		while (j < 8)
		{
			std::cout<< "|          |          |          |          |" << std::endl;
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << j + 1;
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << trim(contacts[j].get_first_name());
			std::cout<< "|";
			std::cout<< std::right << std::setw(10) << trim(contacts[j].get_last_name());
			std::cout<< "|";
			std::cout<<  std::right << std::setw(10) << trim(contacts[j].get_nickname());
			std::cout<< "|" << std::endl;
			std::cout<< "|__________|__________|__________|__________|" << std::endl;
			j++;
		}
	}
	std::cout << std::endl;
	std::string	line;
	int		action;
	//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	if (std::cin.eof() == 1)
		return;
	while(std::getline(std::cin, line) && line != "EXIT")
	{
		if (line.empty())
			return;
		action = std::atoi(line.c_str());
		if (action <= 0 || action >= 9)
			std::cout << "Index unnavailable"<< std::endl;
		else if (((action > 0 && action < 9) && full) || ((action > 0 && action < i + 1) && !full))
		{
			std::cout << "INDEX : " << action << std::endl;
			std::cout << "NUMBER : " << contacts[action - 1].get_phone_number() << std::endl;
			std::cout << "FIRST_NAME : " << contacts[action - 1].get_first_name() << std::endl;
			std::cout << "LAST_NAME : " << contacts[action - 1].get_last_name() << std::endl;
			std::cout << "NICKNAME : " << contacts[action - 1].get_nickname() << std::endl;
			std::cout << "DARKEST_SECRET : " << contacts[action - 1].get_darkest()<< std::endl;
		}
		else
			std::cout << "Index unnavailable"<< std::endl;
	}
}

std::string trim(std::string str)
{
	std::string cap;

	if (str.length() > 10)
	{
		cap = str.substr(0, 10);
		cap.replace(9, 1, ".");
		return(cap);
	}
	return str;
}
