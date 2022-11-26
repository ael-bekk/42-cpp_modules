#include <iostream>
#include "Zombie.hpp"


int main()
{
    Zombie B("cat");
    
    Zombie *A = zombieHorde( 10, "dsfsdfds" );
    for (int i = 0; i < 10; i++)
        A[i].announce();
    delete [] A;
}