/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:08:37 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 18:29:25 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <fstream>
#include <string>


class Harl
{
	public:
		void complain( std::string level );

	
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

typedef void (Harl::*TYPE)(void);


#endif