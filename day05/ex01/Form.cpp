#include "Form.hpp"

Form::Form(std::string const &name, int gradeToSign, int gradeToExecute) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute) {
    if (gradeToSign < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150)
        throw Form::GradeTooLowException();
    if (gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToExecute > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &other) : _name(other._name), _isSigned(other._isSigned), _gradeToSign(other._gradeToSign), _gradeToExecute(other._gradeToExecute) {}

Form::~Form() {}

Form &Form::operator=(Form const &other) {
    if (this != &other)
        this->_isSigned = other._isSigned;
    return *this;
}

std::string const &Form::getName() const {
    return this->_name;
}

bool Form::getIsSigned() const {
    return this->_isSigned;
}

int Form::getGradeToSign() const {
    return this->_gradeToSign;
}

int Form::getGradeToExecute() const {
    return this->_gradeToExecute;
}

void Form::beSigned(Bureaucrat const &bureaucrat) {
    if (bureaucrat.getGrade() > this->_gradeToSign)
        throw Form::GradeTooLowException();
    this->_isSigned = true;
}

const char *Form::GradeTooHighException::what() const throw() {
    return "Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw() {
    return "Grade is too low";
}

std::ostream &operator<<(std::ostream &out, Form const &form) {
    out << "Form " << form.getName() << " is " << (form.getIsSigned() ? "" : "not ") << "signed and requires a grade of " << form.getGradeToSign() << " to sign and a grade of " << form.getGradeToExecute() << " to execute." << std::endl;
    return out;
}
