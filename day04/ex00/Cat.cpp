#include "Cat.hpp"

Cat::Cat(){
    type = "Cat";
    std::cout << "🐱 :   Constructor" << std::endl;
}

Cat::Cat(std::string Type) : Animal::Animal(Type) {
    std::cout << "🐱 :   Constructor Parametrized" << std::endl;
}

Cat::Cat(Cat const & obj) {
    std::cout << "🐱 :   Copy Constructor" << std::endl;
    *this = obj;
}

Cat & Cat::operator = (Cat const & obj) {
    std::cout << "🐱 :   Assignment Operator" << std::endl;
    this->type = obj.type;
    return *this;
}

Cat::~Cat() {
    std::cout << "🐱 :   Destructor" << std::endl;
}

void Cat::makeSound() const{
    std::cout << "🐱 :   Miiiiiiiiiaaaaaaaaaaoooooo..." << std::endl;
}
