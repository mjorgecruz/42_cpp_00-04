/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 14:26:35 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 10:17:22 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#pragma once
#ifndef HumanA_HPP
# define HumanA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &weapon;
        std::string name;

    public:
        void attack( void );
        HumanA(std::string name, Weapon &weapon);
};

#endif