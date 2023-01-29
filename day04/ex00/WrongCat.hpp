#ifndef __WRONGCAT_H__
#define __WRONGCAT_H__

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    public:
        WrongCat();
        WrongCat(std::string Type);
        WrongCat(WrongCat const & obj);
        WrongCat & operator = (WrongCat const & obj);
        ~WrongCat();
        void makeSound() const;
};

#endif