/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:08:20 by masoares          #+#    #+#             */
/*   Updated: 2024/05/23 14:17:21 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Fixed.hpp"

int Fixed::getRawBits( void ) const
{
    return(fixed);
}

void Fixed::setRawBits( int const raw )
{
    fixed = raw;
}

Fixed::Fixed( void )
{
    fixed = 0;
}

Fixed::Fixed( const Fixed &src )
{
    fixed = src.fixed;
}

Fixed::~Fixed( void )
{
}
Fixed &Fixed::operator= (Fixed const &src)
{
    if (this == &src)
    {
        return(*this);
    }
	fixed = src.fixed;
    return *this; 
}

Fixed::Fixed( const int parameter )
{
    fixed = parameter * (1<<frac);
}

Fixed::Fixed( const float parameter )
{
    float floatin = parameter * (1<<frac);
    fixed = (int)roundf(floatin);
}
int Fixed::toInt( void ) const
{
    int value = (int) fixed /(1<<frac);
    return value;
}

float Fixed::toFloat( void ) const
{
    float value = (float) fixed / (1<<frac);
    return value;
}

std::ostream& operator<< (std::ostream& os, const Fixed& src )
{
    os << src.toFloat();
    return os;
}

bool Fixed::operator< ( Fixed const &src )
{
    if (fixed < src.fixed) 
        return true;
    return false;
}

bool Fixed::operator> ( Fixed const &src )
{
    if (fixed > src.fixed) 
        return true;
    return false; 
}

bool Fixed::operator<= ( Fixed const &src )
{
    if (fixed <= src.fixed) 
        return true;
    return false;  
}

bool Fixed::operator>= ( Fixed const &src )
{
    if (fixed >= src.fixed) 
        return true;
    return false; 
}

bool Fixed::operator== ( Fixed const &src )
{
    if (fixed == src.fixed) 
        return true;
    return false; 
}

bool Fixed::operator!= ( Fixed const &src )
{
    if (fixed != src.fixed) 
        return true;
    return false; 
}

Fixed&  Fixed::operator+ ( Fixed const &src )
{
    this->setRawBits(src.getRawBits() + getRawBits());
    return *this;  
}

Fixed&  Fixed::operator- ( Fixed const &src )
{
    this->setRawBits(src.getRawBits() - getRawBits());
    return *this;  
}

Fixed&  Fixed::operator* ( Fixed const &src )
{
    Fixed op (src.toFloat() * this->toFloat());
    setRawBits(op.getRawBits());
    return *this;
}

Fixed&  Fixed::operator/ ( Fixed const &src )
{
    Fixed op (this->toFloat() / src.toFloat());
    setRawBits(op.getRawBits());
    return *this;
}

Fixed&  Fixed::operator++ ()
{
    this->setRawBits(getRawBits() + 1);
    return *this;  
}

Fixed  Fixed::operator++ ( int )
{
    Fixed dest = *this;
    this->setRawBits(getRawBits() + 1);
    return dest; 
}

Fixed&  Fixed::operator-- ()
{
    this->setRawBits(getRawBits() - 1);
    return *this;
}

Fixed  Fixed::operator-- ( int )
{
    Fixed dest = *this;
    this->setRawBits(getRawBits() - 1);
    return dest;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits()) 
        return a;
    return b;
}
Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits()) 
        return a;
    return b;
}
Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() < b.getRawBits())
        return a;
    return b;
}

Fixed const &max(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() > b.getRawBits()) 
        return a;
    return b;
}
