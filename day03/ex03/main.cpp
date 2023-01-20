#include "DiamondTrap.hpp"


int main()
{
    DiamondTrap a("sdf"), b("p2");

    a.whoAmI();
    for (int i = 15; i--;)
        a.attack(b.get_name()),
        b.takeDamage(a.get_attack());

    b.beRepaired(1);
    a.attack(b.get_name());
    b.takeDamage(a.get_attack());
    return 0;
}