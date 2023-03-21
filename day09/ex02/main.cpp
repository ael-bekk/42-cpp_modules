#include "PmergeMe.hpp"

int main(int ac, char **av)
{

    try {
        PmergeMe solve(ac, av);
        solve.solve();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}