/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:03:39 by masoares          #+#    #+#             */
/*   Updated: 2024/05/22 16:59:10 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Point.hpp"

Point::Point( void ): x(Fixed()), y(Fixed()){}
Point::Point( float a, float b): x(Fixed(a)), y(Fixed(b) ){}

Point::Point(Point const &src): x(src.x), y(src.y){}

Point::~Point( void ){}

Fixed const & Point::getFixedX() const
{
    return(this->x);
}

Fixed const & Point::getFixedY() const
{
    return(this->y);
}

Point &Point::operator= (Point const &src)
{
    (void) src;
    return *this;
}
