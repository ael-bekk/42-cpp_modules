#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const _name;
        bool _isSigned;
        int const _gradeToSign;
        int const _gradeToExecute;

    public:
        Form(std::string const &name, int gradeToSign, int gradeToExecute);
        Form(Form const &other);
        ~Form();

        Form &operator=(Form const &other);

        std::string const &getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(Bureaucrat const &bureaucrat);
        
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

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif