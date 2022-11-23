#include <iostream>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main()
{
    int f = 1;
    PhoneBook mobile;

    while (1)
    {
        while(f || mobile.get_choice()->empty() || !skip_whitespace(*mobile.get_choice()))
        {
            f = 0;
            mobile.print_menu();
            std::cout << UBlue << std::right << "\nEnter Command : " << Color_Off;
            mobile.set_choice();
            if (std::cin.eof())
                exit(0);
        }
        mobile.set_im(2);
        f = 1;
        mobile.set_flag(2);
        if (*mobile.get_choice() == "ADD")
            *mobile.get_choice() += "  👤",
            mobile.add_contact();
        else if (*mobile.get_choice() == "SEARCH")
            *mobile.get_choice() += "  🔍",
            mobile.search_contact();
        else if (*mobile.get_choice() == "EXIT")
            break ;
        else
            mobile.set_flag(0);
    }

    return (0);
}