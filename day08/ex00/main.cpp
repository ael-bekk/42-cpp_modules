#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,56,5,0};
    std::vector<int> k(arr, arr + 12);
    std::list<int> l(arr, arr + 12);
    {
        try {
            easyfind(k, 56);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            easyfind(l, 56);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    {
        try {
            easyfind(k, 450);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            easyfind(l, 450);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
}