#include "FragTrap.hpp"

FragTrap::FragTrap() {
	Hit = 100;
	Attack = 30;
	std::cout << "FragTrap : Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {

    this->set_hit() = 100;
    this->set_attack() = 30;
	std::cout << "FragTrap : Constructor called" << std::endl;
}


FragTrap::FragTrap(FragTrap const & obj) : ClapTrap(obj) {

	std::cout << "FragTrap : Copy constructor called" << std::endl;
	*this = obj;
}

FragTrap & FragTrap::operator = (FragTrap const & obj) {
	
	std::cout << "FragTrap : Assignment operator called" << std::endl;

	this->set_name() = obj.get_name();
	this->set_hit() = obj.get_hit();
	this->set_attack() = obj.get_attack();
	return *this;
}

FragTrap::~FragTrap() {

	std::cout << "FragTrap : Destructor called" << std::endl;
}

void	FragTrap::attack(const std::string& target) {

	if (this->get_hit() && this->get_energy())
	{
		std::cout << "FragTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attack() << " points of damage!" << std::endl;
		this->set_energy()--;
	}
}

void    FragTrap::highFivesGuys() {

	std::cout << " high fives" << std::endl;
}
