#ifndef __CLAPTRAP_HPP__
#define __CLAPTRAP_HPP__

#include <iostream>
#include <string>

class ClapTrap {
    
    private:
    
        std::string Name;
        int Hit;
        int Energy;
        int Attack;

    public:

        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const & obj);
        ClapTrap & operator = (ClapTrap const & obj);
        ~ClapTrap();

        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);

        std::string get_name();
        unsigned int get_attack();
        
};

#endif