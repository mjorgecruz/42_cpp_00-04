#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>
#include <limits>
#include <string>
#include <cstdio>

class Zombie
{
    private:
        std::string name;

    public:
        void announce( void );
        void set_name(std::string name);

        Zombie( void );
        Zombie( std::string name );
        ~Zombie( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif