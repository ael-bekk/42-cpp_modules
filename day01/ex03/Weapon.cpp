#include "Weapon.hpp"

const std::string &Weapon::getType() const {

    return (this->type);
}

void    Weapon::setType(std::string str ) {

    this->type = str;
}

Weapon::Weapon( std::string str ) {

    this->setType(str);
}