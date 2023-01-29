#include "WrongAnimal.hpp"

#include <iostream>

WrongAnimal::WrongAnimal() : type("") {

    std::cout << "WrongAnimal : Construct" << std::endl;
}

WrongAnimal::WrongAnimal(std::string Type) : type(Type) {
    std::cout << "WrongAnimal : Construct Parametrized" << std::endl;
}


WrongAnimal::WrongAnimal(WrongAnimal const & obj) {

    std::cout << "WrongAnimal : Copy Construct" << std::endl;
    *this = obj;
}

WrongAnimal & WrongAnimal::operator = (WrongAnimal const & obj) {

    std::cout << "WrongAnimal : Assignment operator" << std::endl;
    this->type = obj.type;
    return *this;
}

WrongAnimal::~WrongAnimal() {

    std::cout << "WrongAnimal : Destructor" << std::endl;
}

void WrongAnimal::makeSound() const{
    std::cout << "WrongAnimal : Has no sound" << std::endl;
}

std::string WrongAnimal::getType() const{
    return this->type;
}