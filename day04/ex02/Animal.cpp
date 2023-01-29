#include "Animal.hpp"

#include <iostream>

Animal::Animal() : type("") {
    std::cout << "Animal : Constructor" << std::endl;
}

Animal::Animal(std::string Type) : type(Type) {
    std::cout << "Animal : Constructor Parametrized" << std::endl;
}

Animal::Animal(Animal const & obj) {

    std::cout << "Animal : Copy Constructor" << std::endl;
    *this = obj;
}

Animal & Animal::operator = (Animal const & obj) {

    std::cout << "Animal : Assignment operator" << std::endl;
    this->type = obj.type;
    return *this;
}

Animal::~Animal() {

    std::cout << "Animal : Destructor" << std::endl;
}

std::string Animal::getType() const{
    return this->type;
}