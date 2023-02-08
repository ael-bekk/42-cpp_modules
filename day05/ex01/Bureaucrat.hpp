#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include "Form.hpp"
#include <iostream>
#include <string>

class Form;

class Bureaucrat
{
    private:
        std::string const _name;
        int _grade;

    public:
        Bureaucrat(std::string const &name, int grade);
        Bureaucrat(Bureaucrat const &other);
        ~Bureaucrat();

        Bureaucrat &operator=(Bureaucrat const &other);

        std::string const &getName() const;
        int getGrade() const;

        void incrementGrade();
        void decrementGrade();
        void signForm(Form &form);

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif