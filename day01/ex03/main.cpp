#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("crude spiked club");
        
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.setWeapon(club);
        {
            HumanB a(jim);
            a.attack();
            club.setType("test");
            a.attack();
        }
        jim.attack();
        club.setType("some other type of club");
        jim.attack();
    }
    system("leaks violence");
    // int *a = new int;
    //     Weapon club = Weapon("crude spiked club");
    //     HumanB jim("Jim");
    // jim.ss()
    return 0;
}