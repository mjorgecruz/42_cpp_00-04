/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:08:20 by masoares          #+#    #+#             */
/*   Updated: 2024/05/23 10:30:21 by masoares         ###   ########.fr       */
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
Fixed &Fixed::operator= (Fixed const &src)
{
    std::cout << "Copy assignment operator called"<< std::endl;
    if (this == &src)
    {
        return(*this);
    }
    fixed = src.fixed;
    return *this; 
}

Fixed::Fixed( const int parameter )
{
    std::cout << "Int constructor called"<< std::endl;
    fixed = parameter * (1 << frac);
}

Fixed::Fixed( const float parameter )
{
    std::cout << "Float constructor called"<< std::endl;
    float floatin = parameter * (1 << frac);
    fixed = (int)roundf(floatin);
}
int Fixed::toInt( void ) const
{
    int value = (int) fixed /  (1 << frac);
    return value;
}

float Fixed::toFloat( void ) const
{
    float value = (float) fixed /  (1 << frac);
    return value;
}

std::ostream& operator<< (std::ostream& os, const Fixed& src )
{
    os << src.toFloat();
    return os;
}


