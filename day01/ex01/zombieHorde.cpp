#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    N = (N <= 0) ? 1 : N;

    Zombie *zombie = new Zombie[N];

    for (int i = 0; i < N; i++)
        zombie[i].setzombieHorde(name),
        zombie[i].announce();
    return (zombie);
}