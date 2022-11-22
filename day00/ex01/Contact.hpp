#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
    private:
        std::string info[5];
    public:
        std::string *get_info();
};

#endif