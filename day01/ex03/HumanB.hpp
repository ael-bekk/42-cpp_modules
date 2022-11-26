
#pragma once
#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__
#include "Weapon.hpp"

class HumanB {

    private:
        Weapon *weapon;
        std::string name;

    public:
        HumanB(std::string name);
        HumanB(std::string name, Weapon *weapon);
        void setWeapon( Weapon &weapon );
        int &ss( int a );
        void attack();
};

#endif