#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__

#include "IMateriaSource.hpp"
#include <string>

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materia[4];
        int indx;

    public:
        MateriaSource();
        MateriaSource(MateriaSource const & obj);
        MateriaSource & operator = (MateriaSource const & obj);
        ~MateriaSource();

        int find(AMateria*);
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const & type);
};

#endif