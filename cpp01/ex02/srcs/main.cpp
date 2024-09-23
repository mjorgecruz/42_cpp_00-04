/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: masoares <masoares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 10:24:52 by masoares          #+#    #+#             */
/*   Updated: 2024/05/09 20:44:54 by masoares         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <iostream>
#include <stdlib.h>
#include <limits>
#include <string>
#include <cstdio>

int main ()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR;
    std::string &stringREF = string;
    
    stringPTR = &string;

    std::cout << "add_string :    " << &string << std::endl;
    std::cout << "add_stringPTR : " << stringPTR << std::endl;
    std::cout << "add_stringREF : " << &stringREF << std::endl;
    std::cout << "string :        " << string << std::endl;
    std::cout << "stringPTR :     " << *stringPTR << std::endl;
    std::cout << "stringREF :     " << stringREF << std::endl;
}
