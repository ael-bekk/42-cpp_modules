#include <iostream>

int main(int ac, char *av[])
{
    if (!--ac)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (int i = 1; i < ac + 1; i++)
        for (size_t j = 0; av[i][j]; j++)
            std::cout << (char)std::toupper(av[i][j]);
    std::cout << std::endl;
    return (0);
}