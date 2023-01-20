#ifndef __FRAGTRAP_HPP__
#define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & obj);
        FragTrap & operator = (FragTrap const & obj);
        ~FragTrap();

        void    attack(const std::string& target);
        void    highFivesGuys(void);
};

#endif