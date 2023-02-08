#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const _name;
        bool _isSigned;
        int const _gradeToSign;
        int const _gradeToExecute;

    public:
        AForm(std::string const &name, int gradeToSign, int gradeToExecute);
        AForm(AForm const &other);
        virtual ~AForm();

        AForm &operator=(AForm const &other);

        std::string const &getName() const;
        bool getIsSigned() const;
        void setIsSigned(bool isSigned);
        int getGradeToSign() const;
        int getGradeToExecute() const;

        void beSigned(Bureaucrat const &bureaucrat);
        virtual void execute(Bureaucrat const &executor) const = 0;

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

        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, AForm const &Aform);

#endif