/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 10:03:46 by masoares          #+#    #+#             */
/*   Updated: 2024/05/10 08:37:44 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "PhoneBook.hpp"

void Contact::set_phone_number()
{
	std::string number;
	std::cout << "PHONE NUMBER : ";
	phone_number = 0; //stoi could also work
	while (getline(std::cin, number))
	{
		phone_number = atoi(number.c_str());
		if (std::cin.eof() == 1 || phone_number > 0)
			break;
		std::cout << "Invalid PHONE NUMBER. Please insert a valid phone number\n";
		std::cout << "PHONE NUMBER : ";
	}
}

void Contact::set_first_name()
{
	std::string str;
	std::cout << "FIRST NAME : ";
	while (getline(std::cin, str) && (str == "" || has_digits(str)))
	{
		std::cout << "Invalid FIRST NAME. Please insert a valid name\n";
		std::cout << "FIRST NAME : ";
	}
	first_name = str;
}

void Contact::set_last_name()
{
	std::cout << "LAST NAME : ";
	while (getline(std::cin, last_name) && (last_name == "" || has_digits(last_name)))
	{
		std::cout << "Invalid LAST NAME. Please insert a valid name\n";
		std::cout << "LAST NAME : ";
	}
	return;
}

void Contact::set_nickname()
{
	if (std::cin.eof() == 1)
		return;
	std::cout << "NICKNAME : ";
	while (getline(std::cin, nickname) &&(nickname == "" || has_digits(nickname)))
	{
		std::cout << "Invalid NICKNAME. Please insert a valid name\n";
		std::cout << "NICKNAME : ";
	}
}
void Contact::set_darkest()
{
	std::cout << "DARKEST SECRET : ";
	while (getline(std::cin, darkest_secret) && (darkest_secret == "" || has_digits(darkest_secret)))
	{
		std::cout << "Invalid DARKEST_SECRET. Please insert a valid name\n";
		std::cout << "DARKEST_SECRET : ";
	}
	return;
}

int Contact::get_phone_number()
{
    return(phone_number);
}
std::string Contact::get_first_name()
{
    return(first_name);
}

std::string Contact::get_last_name()
{
    return(last_name);
}
std::string Contact::get_nickname()
{
        return (nickname);
}
std::string Contact::get_darkest()
{
    return(darkest_secret);
}
