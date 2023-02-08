#ifndef __INTERN_HPP__
#define __INTERN_HPP__

#include <string>
#include <iostream>
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public:
        Intern();
        Intern(Intern const &other);
        ~Intern();
        Intern &operator=(Intern const &other);

        AForm *makeForm(std::string const &name, std::string const &target);
        class UnknownFormException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };  
};

#endif // __INTERN_HPP__