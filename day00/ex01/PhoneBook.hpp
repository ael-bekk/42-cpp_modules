#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

// Bold High Intensity
#define Color_Off   "\033[0m"
#define BIBlack     "\033[1;90m"
#define BIRed       "\033[1;91m"
#define BIGreen     "\033[1;92m"
#define BIYellow    "\033[1;93m"
#define BIBlue      "\033[1;94m"
#define BIPurple    "\033[1;95m"
#define BICyan      "\033[1;96m"
#define BIWhite     "\033[1;97m"

// High Intensity backgrounds
#define On_IBlack   "\033[0;100m"
#define On_IRed     "\033[0;101m"
#define On_IGreen   "\033[0;102m"
#define On_IYellow  "\033[0;103m"
#define On_IBlue    "\033[0;104m"
#define On_IPurple  "\033[0;105m"
#define On_ICyan    "\033[0;106m"
#define On_IWhite   "\033[0;107m"

// Underline
#define UBlack      "\033[4;30m"
#define URed        "\033[4;31m"
#define UGreen      "\033[4;32m"
#define UYellow     "\033[4;33m"
#define UBlue       "\033[4;34m"
#define UPurple     "\033[4;35m"
#define UCyan       "\033[4;36m"
#define UWhite      "\033[4;37m"

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <unistd.h>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
        std::string choice;
        int new_one;
        int max;
        int flag;
        int im;
    public:
        PhoneBook();
        void         print_menu();
        void         set_choice();
        void         set_im(int to_set);
        std::string* get_choice();
        void         set_flag(short to_set);
        int          get_flag();
        void         add_contact();
        void         search_contact();
        void         _exit();
};

int skip_whitespace(std::string str);

#endif