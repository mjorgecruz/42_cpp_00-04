/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:36:22 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 10:32:22 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#ifndef HumanB_HPP
# define HumanB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;

    public:
        void attack( void );
        HumanB(std::string name, Weapon &weapon);
        HumanB(std::string name);
        void setWeapon(Weapon &weapon);
};


#endif