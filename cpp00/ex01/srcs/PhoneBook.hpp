/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 15:20:41 by masoares          #+#    #+#             */
/*   Updated: 2024/05/08 09:11:11 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/


#pragma once
#ifndef __PHONEBOOK_H__
#define __PHONEBOOK_H__

#include <iostream>
#include <stdlib.h>
#include <limits>
#include <string>
#include <cstdio>
#include <iomanip>

class Contact
{
	private:
		int			phone_number;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	darkest_secret;
		
	public:
		void set_phone_number();
		void set_first_name();
		void set_last_name();
		void set_nickname();
		void set_darkest();
		int	get_phone_number();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_darkest();
};

class PhoneBook
{
	public:
		Contact contacts[8];
		int		i;
		bool	full;

		void action_add(Contact *contact);
		void action_search();
};

int start_up();
int start_add();
int start_exit();
int start_search();
int has_digits(std::string str);
std::string trim(std::string str);

#endif