#include "AForm.hpp"

AForm::AForm(std::string const &name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150)
        throw AForm::GradeTooLowException();
    if (gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

AForm::~AForm() {}

AForm &AForm::operator=(AForm const &other) {
    if (this != &other)
        this->_isSigned = other._isSigned;
    return *this;
}

std::string const &AForm::getName() const {
    return this->_name;
}

bool AForm::getIsSigned() const {
    return this->_isSigned;
}

void AForm::setIsSigned(bool isSigned) {
    this->_isSigned = isSigned;
}

int AForm::getGradeToSign() const {
    return this->_gradeToSign;
}

int AForm::getGradeToExecute() const {
    return this->_gradeToExecute;
}

void AForm::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw AForm::GradeTooLowException();
    this->_isSigned = true;
}

const char *AForm::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw() {
    return "Form is not signed";
}

std::ostream &operator<<(std::ostream &out, AForm const &Aform) {
    out << "AForm " << Aform.getName() << " is " << (Aform.getIsSigned() ? "" : "not ") << "signed and requires a grade of " << Aform.getGradeToSign() << " to sign and a grade of " << Aform.getGradeToExecute() << " to execute." << std::endl;
    return out;
}
