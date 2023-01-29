#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"

class Dog : public Animal {
    public:
        Dog();
        Dog(std::string Type);
        Dog(Dog const & obj);
        Dog & operator = (Dog const & obj);
        ~Dog();
        void makeSound() const;
};

#endif