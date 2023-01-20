#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {

	std::cout << "DiamondTrap : Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), name(name) {

	std::cout << "DiamondTrap : Constructor parametrized called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & obj) {

	*this = obj;
	std::cout << "DiamondTrap : Copy constructor called" << std::endl;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap const & obj) {
	
	std::cout << "DiamondTrap : Assignment operator called" << std::endl;

    this->name = obj.get_name() + "_clap_name";
	this->set_name() = obj.get_name();
	this->set_hit() = obj.get_hit();
	this->set_energy() = obj.get_energy();
	this->set_attack() = obj.get_attack();
	return *this;
}

DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap : Destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string& target) {

    ScavTrap::attack(target);
	std::cout << "[ Energy : " << Energy << "]" << std::endl;
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name : " << this->name << " and its ClapTrap name " << this->Name << std::endl;
}
