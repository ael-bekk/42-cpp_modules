#pragma once
#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include <iostream>

class Zombie {

    private:
        std::string name;

    public:
        Zombie( );
        Zombie( std::string name );
        ~Zombie( );
        void announce( void );
        void setzombieHorde( std::string name );

};

Zombie* zombieHorde( int N, std::string name );

#endif