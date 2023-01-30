#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string str;
        AMateria    *materia[4];
        AMateria    *M_collect[400];
        int         indx;

    public:
        Character();
        Character(std::string str);
        Character(Character const & obj);
        Character & operator=(Character const & obj);
        ~Character();

        std::string const & getName() const;
        int find(AMateria* to_find);
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif