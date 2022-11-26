#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie B("cat");
    Zombie * A;
    
    A = newZombie( "dog" );
    A->announce();
    delete A;
}