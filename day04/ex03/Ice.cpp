#include "Ice.hpp"

Ice::Ice() {
    std::cout << "Ice : Default Constructor\n";
    this->type = "ice";
}

Ice::Ice(std::string const & type) : AMateria::AMateria(type) {
    std::cout << "Ice : Constructor Parametrized\n";
    this->type = "ice";
}

Ice::Ice(Ice const & obj) {
    std::cout << "Ice : Copy Constructor\n";
    *this = obj;
}

Ice & Ice::operator = (Ice const & obj) {
    std::cout << "Ice : Assignment Operator\n";
    this->type = obj.type;
    return *this;
}

Ice::~Ice() {
    std::cout << "Ice : Default Destructor\n";
}

AMateria* Ice::clone() const {
    AMateria* new_materia = new Ice();
    *new_materia = *this;
    return new_materia;
}

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}
