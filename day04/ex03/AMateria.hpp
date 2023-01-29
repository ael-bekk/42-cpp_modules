#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__

#include "ICharacter.hpp"
class ICharacter;

class AMateria
{
    protected:
        std::string type;

    public:
        AMateria();
        AMateria(std::string const & type);
        AMateria(AMateria const & obj);
        AMateria & operator = (AMateria const & obj);
        ~AMateria();
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif