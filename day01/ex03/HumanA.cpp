#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon), name(name) {}

void    HumanA::attack() {

    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}