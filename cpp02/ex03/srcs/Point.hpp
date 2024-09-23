/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 14:12:20 by masoares          #+#    #+#             */
/*   Updated: 2024/05/22 16:55:55 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp" 

class Point
{
    public:
        Point ( void );
        Point( float x, float y);
        Point(Point const &src);
        ~Point();
        Point& operator= (Point const &src);
        
        Fixed const &getFixedX() const;
        Fixed const &getFixedY() const;

    private:
        Fixed const x; 
        Fixed const y; 
};

#endif