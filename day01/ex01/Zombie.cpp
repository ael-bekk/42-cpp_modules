#include "Zombie.hpp"

void    Zombie::announce() {
    
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( std::string name ):name(name) <%%>

Zombie::Zombie( ) <%%>

Zombie::~Zombie() <% std::cout << this->name << ": Died" << std::endl; %>

void    Zombie::setzombieHorde( std::string name ) {

    this->name = name;
}
