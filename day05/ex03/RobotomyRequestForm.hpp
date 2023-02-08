#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

#include "AForm.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm : public AForm
{
    private:
        std::string const _target;

    public:
        RobotomyRequestForm(std::string const &target);
        RobotomyRequestForm(RobotomyRequestForm const &other);
        ~RobotomyRequestForm();

        RobotomyRequestForm &operator=(RobotomyRequestForm const &other);

        std::string const &getTarget() const;

        void execute(Bureaucrat const &executor) const;
};

#endif