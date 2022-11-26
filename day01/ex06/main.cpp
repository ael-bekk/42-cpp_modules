#include "Harl.hpp"

int main(int ac, char *av[])
{
    Harl A;

    if (ac != 2)
        return (0);
    A.complain(av[1]);
    return (0);
}