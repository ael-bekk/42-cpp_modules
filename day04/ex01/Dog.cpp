#include "Dog.hpp"

Dog::Dog() {
    std::cout << "🐶 :   Constructor" << std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(std::string Type) : Animal::Animal(Type) {
    std::cout << "🐶 :   Constructor parametrized" << std::endl;
    brain = new Brain();
}

Dog::Dog(Dog const & obj) {
    std::cout << "🐶 :   Copy Constructor" << std::endl;
    brain = new Brain();
    *this = obj;
}

Dog & Dog::operator = (Dog const & obj) {
    std::cout << "🐶 :   Assignment Operator" << std::endl;
    this->type = obj.type;
    *this->brain = *obj.brain;
    return *this;
}

Dog::~Dog() {
    delete this->brain;
    std::cout << "🐶 :   Destructor" << std::endl;
}

void Dog::makeSound() const{
    std::cout << "🐶 :   Haaaaaaaaaaooooooooo..." << std::endl;
}

