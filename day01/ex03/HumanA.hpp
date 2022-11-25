
#pragma once
#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__
#include "Weapon.hpp"

class HumanA {

    private:
        const Weapon &weapon;
        std::string name;

    public:
        HumanA(std::string name, Weapon &Weapon);
        void attack();
};

#endif