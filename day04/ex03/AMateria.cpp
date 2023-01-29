#include "AMateria.hpp"

AMateria::AMateria() {

}

AMateria::AMateria(std::string const & type) {

}

AMateria::AMateria(AMateria const & obj) {

}

AMateria & AMateria::operator = (AMateria const & obj) {

}

AMateria::~AMateria() {

}

std::string const & AMateria::getType() const {
    return this->type;
}

void AMateria::use(ICharacter& target) {

}
