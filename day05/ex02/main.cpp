#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{
    try
    {
        Bureaucrat b("Bureaucrat", 1);
        RobotomyRequestForm f1("RobotomyRequestForm");
        ShrubberyCreationForm f2("ShrubberyCreationForm");
        PresidentialPardonForm f3("PresidentialPardonForm");
        b.signForm(f1);
        b.signForm(f2);
        b.signForm(f3);
        b.executeForm(f1);
        b.executeForm(f2);
        b.executeForm(f3);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}