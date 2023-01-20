#include "ScavTrap.hpp"


int main()
{
    ScavTrap a("p1"), b("p2");

    for (int i = 15; i--;)
        a.attack(b.get_name()),
        b.takeDamage(a.get_attack());

    b.beRepaired(1);
    a.attack(b.get_name());
    b.takeDamage(a.get_attack());
    a.guardGate();
    return 0;
}