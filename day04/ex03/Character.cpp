#include "Character.hpp"

Character::Character() : str(""), indx(0) {
    std::cout << "Character : Default Constructor\n";
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

Character::Character(std::string str) : str(str), indx(0) {
    std::cout << "Character : Constructor Parametrized\n";
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
}

Character::Character(Character const & obj) {
    std::cout << "Character : Copy Constructor\n";
    this->indx = 0;
    for (int i = 0; i < 4; i++)
        this->materia[i] = NULL;
    *this = obj;
}

Character & Character::operator=(Character const & obj) {
    std::cout << "Character : Assignment Operator\n";
    for (int i = 0; i < 4; i++)
        delete this->materia[i],
        this->materia[i] = obj.materia[i]->clone();
    return *this;
}

Character::~Character() {
    std::cout << "Character : Default Destructor\n";
    for (int i = 0; i < 4; i++)
        delete materia[i];
    for (int i = 0; i < this->indx; i++)
        delete M_collect[i];
}

int Character::find(AMateria* to_find) {
    for (int i = 0; i < 4; i++)
        if (to_find == this->materia[i])
            return i;
    return -1;
}

std::string const & Character::getName() const {
    return this->str;
}

void Character::equip(AMateria* m) {
    if (m)
        for (int i = 0; i < 4; i++)
            if (!this->materia[i]) {
                this->materia[i] = m->clone();
                break;
            }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4 && this->materia[idx])
        this->M_collect[this->indx++] = this->materia[idx],
        this->materia[idx] = NULL;

}

void Character::use(int idx, ICharacter& target) {
    if (idx >= 0 && idx < 4 && this->materia[idx])
        (*this->materia[idx]).use(target);
}
