#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain : Constructor" << std::endl;
}

Brain::Brain(Brain const & obj) {
    std::cout << "Brain : Constructor Parametrized" << std::endl;
    *this = obj;
}

Brain & Brain::operator = (Brain const & obj) {
    std::cout << "Brain : Copy Constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = obj.ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain : Destructor" << std::endl;
}
