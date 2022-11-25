#pragma once
#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

class Weapon {

    private:
        std::string type;
    
    public:
        Weapon( std::string str );
        // Weapon(const Weapon& w) = delete;
        const std::string &getType() const;
        void setType( std::string str );
};

#endif