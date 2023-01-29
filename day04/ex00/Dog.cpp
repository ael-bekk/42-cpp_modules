#include "Dog.hpp"

Dog::Dog() {
    type = "Dog";
    std::cout << "🐶 :   Constructor" << std::endl;
}

Dog::Dog(std::string Type) : Animal::Animal(Type) {
    std::cout << "🐶 :   Constructor parametrized" << std::endl;
}

Dog::Dog(Dog const & obj) {
    std::cout << "🐶 :   Copy Constructor" << std::endl;
    *this = obj;
}

Dog & Dog::operator = (Dog const & obj) {
    std::cout << "🐶 :   Assignment Operator" << std::endl;
    this->type = obj.type;
    return *this;
}

Dog::~Dog() {
    std::cout << "🐶 :   Destructor" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "🐶 :   Haaaaaaaaaaooooooooo..." << std::endl;
}

