#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() : indx(0) {
    std::cout << "MateriaSource : Default Constructor\n";
}

MateriaSource::MateriaSource(MateriaSource const & obj) {
    std::cout << "MateriaSource : Copy Constructor\n";
    this->indx = 0;
    *this = obj;
}

MateriaSource & MateriaSource::operator = (MateriaSource const & obj) {
    std::cout << "MateriaSource : Assignment Operator\n";
    while (this->indx--)
        delete materia[this->indx];
    this->indx = obj.indx;
    for (int i = 0; i < this->indx; i++)
        this->materia[i] = obj.materia[i]->clone();
    return *this;
}

MateriaSource::~MateriaSource() {
    std::cout << "MateriaSource : Default Destructor\n";
    while (this->indx--)
        delete materia[this->indx];
}

int MateriaSource::find(AMateria* to_find) {
    for (int i = 0; i < this->indx; i++)
        if (to_find == this->materia[i])
            return i;
    return -1;
}

void MateriaSource::learnMateria(AMateria* materia) {
    if (this->indx < 4 && this->find(materia) == -1)
        this->materia[this->indx++] = materia->clone();
    else if (this->indx < 4)
        this->materia[this->indx++] = materia;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
    for (int i = 0; i < this->indx; i++)
        if (type == this->materia[i]->getType())
            return this->materia[i]->clone();
    return (NULL);
}
