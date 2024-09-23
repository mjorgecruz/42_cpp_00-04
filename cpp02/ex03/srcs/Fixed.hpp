/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:08:37 by masoares          #+#    #+#             */
/*   Updated: 2024/05/23 14:17:04 by masoares         ###   ########.fr       */
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

		Fixed & operator= ( Fixed const &src );
		friend std::ostream& operator<< ( std::ostream& os, Fixed const &src );
		bool operator< ( Fixed const &src );
		bool operator> ( Fixed const &src );
		bool operator<= ( Fixed const &src );
		bool operator>= ( Fixed const &src );
		bool operator== ( Fixed const &src );
		bool operator!= ( Fixed const &src );
		
		Fixed& operator+ ( Fixed const &src );
		Fixed& operator- ( Fixed const &src );
		Fixed& operator* ( Fixed const &src );
		Fixed& operator/ ( Fixed const &src );

		Fixed& operator++ ();
		Fixed operator++ ( int );
		Fixed& operator-- ();
		Fixed operator-- ( int );
		
		static Fixed &min(Fixed &a, Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static Fixed const &min(Fixed const &a, Fixed const &b);
		static Fixed const &max(Fixed const &a, Fixed const &b);
		
	private:
		int	fixed;
		static const int frac = 8;

};

#endif