#include "Character.hpp"

Character::Character() {

}

Character::Character(std::string str) {

}

Character::Character(Character const & obj) {

}

Character & Character::operator=(Character const & obj) {

}

Character::~Character() {

}

std::string const & Character::getName() const {

}

void Character::equip(AMateria* m) {

}

void Character::unequip(int idx) {

}

void Character::use(int idx, ICharacter& target) {

}
