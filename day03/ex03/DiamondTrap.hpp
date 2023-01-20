#ifndef __DIAMONDTRAP_HPP__
#define __DIAMONDTRAP_HPP__

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap , public ScavTrap {

    private:

        std::string name;

    public:

        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap const & obj);
        DiamondTrap & operator = (DiamondTrap const & obj);
        ~DiamondTrap();

        void    attack(const std::string& target);
        void    whoAmI();
};

#endif