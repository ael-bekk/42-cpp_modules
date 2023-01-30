#ifndef __CHARACTER_HPP__
#define __CHARACTER_HPP__

#include "ICharacter.hpp"

class Character : public ICharacter
{
    private:
        std::string 
    public:
        Character();
        Character(std::string str);
        Character(Character const & obj);
        Character & operator=(Character const & obj);
        ~Character();

        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif