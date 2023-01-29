#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal {

    protected:
        std::string type;

    public:
        Animal();
        Animal(std::string Type);
        Animal(Animal const & obj);
        Animal & operator = (Animal const & obj);
        virtual ~Animal();

        virtual void makeSound() const;
        std::string getType() const;
};

#endif