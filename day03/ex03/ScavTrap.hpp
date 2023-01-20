#ifndef __SCAVTRAP_HPP__
#define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {

    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & obj);
        ScavTrap & operator = (ScavTrap const & obj);
        ~ScavTrap();

        void    attack(const std::string& target);
        void    guardGate();
};

#endif