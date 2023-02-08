#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {
    
    private:
        std::string const _target;

    public:
        ShrubberyCreationForm(std::string const &target);
        ShrubberyCreationForm(ShrubberyCreationForm const &other);
        virtual ~ShrubberyCreationForm();

        ShrubberyCreationForm &operator=(ShrubberyCreationForm const &other);

        virtual void execute(Bureaucrat const &executor) const;
};

#endif