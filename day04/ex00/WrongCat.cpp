#include "WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
    std::cout << "🐱 :   Construct" << std::endl;
}

WrongCat::WrongCat(std::string Type) : WrongAnimal::WrongAnimal(Type) {
    std::cout << "🐱 :   Construct Parametrized" << std::endl;
}

WrongCat::WrongCat(WrongCat const & obj) {
    std::cout << "🐱 :   Copy Construct" << std::endl;
    *this = obj;
}

WrongCat & WrongCat::operator = (WrongCat const & obj) {
    std::cout << "🐱 :   Assignment Operator" << std::endl;
    this->type = obj.type;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "🐱 :   Destructor" << std::endl;
}

void WrongCat::makeSound() const{
    std::cout << "🐱 :   Miiiiiiiiiaaaaaaaaaaoooooo..." << std::endl;
}
