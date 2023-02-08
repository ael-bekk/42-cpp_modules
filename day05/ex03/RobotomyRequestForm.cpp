#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) : AForm("RobotomyRequestForm", 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm(other), _target(other._target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &other)
{
    if (this != &other)
        AForm::operator=(other);
    return *this;
}

std::string const &RobotomyRequestForm::getTarget() const
{
    return this->_target;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!this->getIsSigned())
        throw AForm::FormNotSignedException();
    if (getGradeToExecute() < executor.getGrade())
        throw GradeTooLowException();
    srand(time(NULL));
    if (rand() % 2)
        std::cout << this->_target << " has been robotomized successfully" << std::endl;
    else
        std::cout << "Robotomization of " << this->_target << " has failed" << std::endl;
}