#ifndef __ICE_HPP__
#define __ICE_HPP__

#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(std::string const & str);
        Ice(Ice const & obj);
        Ice & operator = (Ice const & obj);
        ~Ice();
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif