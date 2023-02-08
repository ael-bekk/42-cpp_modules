#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Form form("1", 0, 1);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Form form("2", 1, 0);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Form form("3", 151, 1);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Form form("4", 1, 151);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Bureaucrat bureaucrat("Bureaucrat", 1);
        Form form("5", 2, 2);

        std::cout << form;
        bureaucrat.signForm(form);
        std::cout << bureaucrat;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}