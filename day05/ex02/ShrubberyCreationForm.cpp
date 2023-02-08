#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
    AForm("ShrubberyCreationForm", 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) :
    AForm(other), _target(other._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &other) {
    if (this != &other)
        AForm::operator=(other);
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
    if (!this->getIsSigned())
        throw AForm::FormNotSignedException();
    if (getGradeToExecute() < executor.getGrade())
        throw GradeTooLowException();
    std::ofstream ofs(_target + "_shrubbery");
    ofs << "          ,@@@@@@@," << std::endl;
    ofs << "    ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    ofs << " ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    ofs << ",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    ofs << "%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    ofs << "%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    ofs << "`&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    ofs << "    |o|        | |         | |" << std::endl;
    ofs << "    |.|        | |         | |" << std::endl;
    ofs << " \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
    ofs.close();
}