#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(Intern const &other) {
    (void)other;
}

Intern::~Intern() {}

Intern &Intern::operator=(Intern const &other) {
    (void)other;
    return *this;
}

AForm *Intern::makeForm(std::string const &name, std::string const &target) {
    if (name == "shrubbery creation")
        return new ShrubberyCreationForm(target);
    else if (name == "robotomy request")
        return new RobotomyRequestForm(target);
    else if (name == "presidential pardon")
        return new PresidentialPardonForm(target);
    else
        throw Intern::UnknownFormException();
}

const char *Intern::UnknownFormException::what() const throw() {
    return "Unknown form";
}