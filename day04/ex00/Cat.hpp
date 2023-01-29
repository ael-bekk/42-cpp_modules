#ifndef __CAT_H__
#define __CAT_H__

#include "Animal.hpp"

class Cat : public Animal {
    public:
        Cat();
        Cat(std::string Type);
        Cat(Cat const & obj);
        Cat & operator = (Cat const & obj);
        ~Cat();
        void makeSound() const;
};

#endif