#include "Cure.hpp"

Cure::Cure() {
    std::cout << "Cure : Default Constructor\n";
    this->type = "cure";
}


Cure::Cure(std::string const & type) : AMateria::AMateria(type) {
    std::cout << "Cure : Constructor Parametrized\n";
    this->type = "cure";
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

AMateria* Cure::clone() const {
    AMateria* new_materia = new Cure();
    *new_materia = *this;
    return new_materia;
}

void Cure::use(ICharacter& target) {
    std::cout << "* heals " << target.getName() << "’s wounds *\n";
}
