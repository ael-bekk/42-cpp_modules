#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
    public:
        std::string info[5];
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string darkest_secret;
};

#endif