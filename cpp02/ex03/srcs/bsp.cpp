/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:34:19 by masoares          #+#    #+#             */
/*   Updated: 2024/05/23 10:34:32 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "main.hpp"

float area(Point a, Point b, Point c)
{
    
    float x1 = a.getFixedX().toFloat();
    float y1 = a.getFixedY().toFloat();
    float x2 = b.getFixedX().toFloat();
    float y2 = b.getFixedY().toFloat();
    float x3 = c.getFixedX().toFloat();
    float y3 = c.getFixedY().toFloat();
    
    float res = (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2;
    if (res < 0)
        return -res;
    return res;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float A = area (a, b, c);
    float A1 = area (point, b, c);
    float A2 = area (a, point, c);
    float A3 = area (a, b, point);
    if (A1 == 0 || A2 == 0 || A3 == 0)
        return(0);
    return (A == A1 + A2 + A3);
}