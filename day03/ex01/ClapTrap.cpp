#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name(""), Hit(10), Energy(10), Attack(0) {

	std::cout << "ClapTrap : Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), Hit(10), Energy(10), Attack(0) {

	std::cout << "ClapTrap : Constructor parametrized called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & obj) {

	std::cout << "ClapTrap : Copy constructor called" << std::endl;
	*this = obj;
}

ClapTrap & ClapTrap::operator = (ClapTrap const & obj) {
	
	std::cout << "ClapTrap : Assignment operator called" << std::endl;

	this->Name = obj.Name;
	this->Hit = obj.Hit;
	this->Energy = obj.Energy;
	this->Attack= obj.Attack;
	return *this;
}

ClapTrap::~ClapTrap() {

	std::cout << "ClapTrap : Default destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target) {

	if (this->Hit && this->Energy)
	{
		std::cout << "ClapTrap " << this->Name << " attacks " << target << ", causing " << this->Attack << " points of damage!" << std::endl;
		this->Energy--;
	}
}

void    ClapTrap::takeDamage(unsigned int amount) {
	
	if (this->Hit && this->Energy)
	{
		std::cout << "ClapTrap " << this->Name << " Hit point : [ " << this->Hit;
		this->Hit -= amount;
		this->Hit *= (this->Hit > 0);
		std::cout << " ====> " << this->Hit << " ]" << std::endl;
	}
}

void    ClapTrap::beRepaired(unsigned int amount) {
	
	if (this->Hit && this->Energy)
	{
	std::cout << "ClapTrap " << this->Name << " Energy point : [ " << this->Energy;
	this->Energy += amount;
	std::cout << " ====> " << this->Energy << " ]" << std::endl;
	}
}

std::string ClapTrap::get_name() const {
	return this->Name;
}

int ClapTrap::get_hit() const {
	return this->Hit;
}

int ClapTrap::get_energy() const {
	return this->Energy;
}

int ClapTrap::get_attack() const {
	return this->Attack;
}


std::string & ClapTrap::set_name() {
	return this->Name;
}

int & ClapTrap::set_hit() {
	return this->Hit;
}

int & ClapTrap::set_energy() {
	return this->Energy;
}

int & ClapTrap::set_attack() {
	return this->Attack;
}
