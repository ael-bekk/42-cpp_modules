#include <iostream>
#include "Zombie.hpp"


int main()
{
    Zombie B("cat");
    
    Zombie *A = zombieHorde( 10, "dsfsdfds" );
    delete [] A;
}