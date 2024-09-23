/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:08:37 by masoares          #+#    #+#             */
/*   Updated: 2024/05/23 09:08:32 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

class Fixed
{
	public:
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		Fixed( void );
		Fixed( const Fixed &src );
		~Fixed( void );
		Fixed( const int parameter );
		Fixed( const float parameter );
		Fixed& operator= ( Fixed const &src );
		

	private:
		int	fixed;
		static const int frac = 8;

};

std::ostream& operator<< ( std::ostream& os, Fixed const &src );

#endif