#include "AMateria.hpp"

AMateria::AMateria() : type("") {
    std::cout << "AMateria : Default Constructor\n";
}

AMateria::AMateria(std::string const & type) : type(type) {
    std::cout << "AMateria : Constructor Parametrized\n";
}

AMateria::AMateria(AMateria const & obj) {
    std::cout << "AMateria : Copy Constructor\n";
    *this = obj;
}

AMateria & AMateria::operator = (AMateria const & obj) {
    std::cout << "AMateria : Assignment Operator\n";
    this->type = obj.type;
}

AMateria::~AMateria() {
    std::cout << "AMateria : Default Destructor\n";
}

std::string const & AMateria::getType() const {
    return this->type;
}

void AMateria::use(ICharacter& target) {
    std::cout << "* " << this->type << " *\n";
}
