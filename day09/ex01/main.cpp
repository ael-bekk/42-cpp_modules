#include "RPN.hpp"

int main(int ac, char **av) {

    if (ac == 2)
    {
        try {
            RPN::solve(av[1]);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
}