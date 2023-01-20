#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
 	
	Energy = 50;
	std::cout << "ScavTrap : Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

    this->set_energy() = 50;
	std::cout << "ScavTrap : Constructor called" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const & obj) : ClapTrap(obj) {

	std::cout << "ScavTrap : Copy constructor called" << std::endl;
	*this = obj;
}

ScavTrap & ScavTrap::operator = (ScavTrap const & obj) {
	
	std::cout << "ScavTrap : Assignment operator called" << std::endl;

	this->set_name() = obj.get_name();
	this->set_energy() = obj.get_energy();
	return *this;
}

ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap : Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {

	if (this->get_hit() && this->get_energy())
	{
		std::cout << "ScavTrap " << this->get_name() << " attacks " << target << ", causing " << this->get_attack() << " points of damage!" << std::endl;
		this->set_energy()--;
	}
}

void    ScavTrap::guardGate() {

	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}