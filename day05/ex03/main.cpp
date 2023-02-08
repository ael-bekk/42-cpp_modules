#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    try {
        Bureaucrat b1("Bureaucrat1", 1);
        Intern i1;
        AForm *f1 = i1.makeForm("shrubbery creation", "target1");
        b1.signForm(*f1);
        b1.executeForm(*f1);
        delete f1;
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
        }
    return 0;
}