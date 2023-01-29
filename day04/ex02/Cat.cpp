#include "Cat.hpp"

Cat::Cat(){
    std::cout << "🐱 :   Constructor" << std::endl;
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(std::string Type) : Animal::Animal(Type) {
    std::cout << "🐱 :   Constructor Parametrized" << std::endl;
    brain = new Brain();
}

Cat::Cat(Cat const & obj) {
    std::cout << "🐱 :   Copy Constructor" << std::endl;
    this->brain = new Brain();
    *this = obj;
}

Cat & Cat::operator = (Cat const & obj) {
    std::cout << "🐱 :   Assignment Operator" << std::endl;
    this->type = obj.type;
    *this->brain = *obj.brain;
    return *this;
}

Cat::~Cat() {
    delete this->brain;
    std::cout << "🐱 :   Destructor" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "🐱 :   Miiiiiiiiiaaaaaaaaaaoooooo..." << std::endl;
}
