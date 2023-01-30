#include "Cure.hpp"

Cure::Cure() {
    std::cout << "Cure : Default Constructor\n";
}

Cure::Cure(std::string const & type) : AMateria::AMateria(type) {
    std::cout << "Cure : Constructor Parametrized\n";
}

Cure::Cure(Cure const & obj) {
    std::cout << "Cure : Copy Constructor\n";
    *this = obj;
}

Cure & Cure::operator = (Cure const & obj) {
    std::cout << "Cure : Assignment Operator\n";
    this->type = obj.type;
    return *this;
}

Cure::~Cure() {
    std::cout << "Cure : Default Destructor\n";
}

AMateria* AMateria::clone() const {
    AMateria* new_materia = new Cure();
    *new_materia = *this;
    return new_materia;
}

void Cure::use(ICharacter& target) {
    std::cout << "* shoots an Cure bolt at " << this->type << " *\n";
}
