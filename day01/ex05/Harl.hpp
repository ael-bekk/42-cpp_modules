#pragma once
#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <iostream>

class Harl {

    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
        void deff( void );

    public:
        void complain( std::string level );

};

#endif