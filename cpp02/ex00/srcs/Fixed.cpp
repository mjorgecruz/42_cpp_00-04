/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:08:20 by masoares          #+#    #+#             */
/*   Updated: 2024/05/23 10:30:34 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called"<< std::endl;
    return(fixed);
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called"<< std::endl;
    fixed = raw;
}

Fixed::Fixed( void )
{
    std::cout << "Default constructor called"<< std::endl;
    fixed = 0;
}

Fixed::Fixed( const Fixed &src )
{
    std::cout << "Copy constructor called"<< std::endl;
    *this = src;
}

Fixed::~Fixed( void )
{
    std::cout << "Destructor called"<< std::endl;
}
Fixed &Fixed::operator= (const Fixed &src)
{
    std::cout<< "Copy assignment operator called"<< std::endl;
    if (this == &src)
    {
        return(*this);
    }
    fixed = src.getRawBits();
    return *this; 
}