#ifndef __CURE_HPP__
#define __CURE_HPP__

#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(std::string str);
        Cure(Cure const & obj);
        Cure & operator = (Cure const & obj);
        ~Cure();
        AMateria* clone() const;
};

#endif