#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        int new_one;
        int max;
    public:
        PhoneBook();
        void    add_contact();
        void    search_contact();
        void    _exit();
};

#endif