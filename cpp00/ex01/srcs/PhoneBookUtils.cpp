/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookUtils.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 08:57:15 by masoares          #+#    #+#             */
/*   Updated: 2024/05/08 09:25:57 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "PhoneBook.hpp"

int main(int ac, char **av)
{
	std::string action;
	PhoneBook	phonebook;
	
	(void) ac;
	(void) av;
	phonebook.i = 0;
	phonebook.full = 0;
	system("clear");
	start_up();
	while(getline(std::cin, action))
	{
		system("clear");
		start_up();
		if (action.empty())
			continue;
		else if (action == "ADD")
		{
			system("clear");
			start_add();
			phonebook.action_add(&(phonebook.contacts[phonebook.i]));
		}
		else if (action == "SEARCH")
		{
			system("clear");
			start_search();
			phonebook.action_search();
		}
		else if (action == "EXIT")
		{
			system("clear");
			start_exit();
			break;
		}
		system("clear");
		start_up();
	}
	system("clear");
	start_exit();
}

int has_digits(std::string str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}