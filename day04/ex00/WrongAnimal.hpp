#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <iostream>
#include <string>

class WrongAnimal {

    protected:
        std::string type;
    
    public:
        WrongAnimal();
        WrongAnimal(std::string Type);
        WrongAnimal(WrongAnimal const & obj);
        WrongAnimal & operator = (WrongAnimal const & obj);
        ~WrongAnimal();

        void makeSound() const;
        std::string getType() const;
};

#endif