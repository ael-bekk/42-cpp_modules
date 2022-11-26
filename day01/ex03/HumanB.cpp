#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name):weapon(NULL), name(name) {}

HumanB::HumanB(std::string name, Weapon *weapon):weapon(weapon), name(name) {}

void HumanB::setWeapon( Weapon &weapon ) {

    this->weapon = &weapon;
}

void    HumanB::attack() {

    if (weapon)
        std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " has no weapon " << std::endl;
}
