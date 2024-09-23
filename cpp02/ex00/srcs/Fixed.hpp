/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:08:37 by masoares          #+#    #+#             */
/*   Updated: 2024/05/23 09:04:06 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <fstream>
#include <string>


class Fixed
{
	public:
		int getRawBits( void ) const;
		void setRawBits( int const raw );

		Fixed( void );
		Fixed( const Fixed &src );
		~Fixed( void );
		Fixed& operator= (Fixed const &src);

	private:
		int	fixed;
		static const int frac;

};

#endif