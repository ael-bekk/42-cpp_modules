#include "PhoneBook.hpp"

PhoneBook::PhoneBook():new_one(0),max(0),flag(0),im(2){}

int skip_whitespace(std::string str)
{
    for (size_t i = 0; i < str.length(); i++)
        if (!std::isspace(str[i]))
            return (1);
    return (0);
}

std::string*    PhoneBook::get_choice()
{
    return (&this->choice);
}

void    PhoneBook::set_choice()
{
    std::getline(std::cin, this->choice);
}

void    PhoneBook::set_flag(short to_set)
{
    this->flag = to_set;
}

void    PhoneBook::set_im(int to_set)
{
    this->im = to_set;
}

void    PhoneBook::print_menu()
{
    system("clear");
    std::cout << On_IGreen << std::left << std::setw(20) << "\t\tADD" << std::setw(30) << ": (Insert New Contact)" << Color_Off << std::endl;
    std::cout << On_IGreen << std::setw(20) << "\t\tSEARCH" << std::setw(30) << ": (Search for saved contacts)" << Color_Off << std::endl;
    std::cout << On_IGreen << std::setw(20) << "\t\tEXIT" << std::setw(30) << ": (-_-)" << Color_Off << std::endl;
    std::cout << (!this->flag ? On_IRed : On_IGreen) << std::setw(20) << "\t\tCommand" << ": " << std::setw(30 - this->im) << this->choice << Color_Off << std::endl;
    std::cout << std::right;
}

void    print_info(Contact *user, int count)
{
    std::cout << "\t\t ┌──────────┬──────────┬──────────┬──────────┐\n";
    std::cout << "\t\t │       Idx│First Name│ Last Name│  Nickname│\n";
    for (int i = 0; i < count; i++)
    {
        std::string *info = user[i].get_info();
        if (!i)
            std::cout << "\t\t ├──────────┼──────────┼──────────┼──────────┤\n";
        std::cout << "\t\t │" << std::setw(10) << i << "│";
        for (int j = 0; j < 3; j++)
        {
            std::string s = info[j];
            if (s.length() > 10)
                s[9] = '.';
            std::cout << std::setw(10) << s.substr(0, 10);
            std::cout << "│";
        }
        std::cout << std::endl;
    }
    std::cout << "\t\t └──────────┴──────────┴──────────┴──────────┘\n";
}

void    PhoneBook::add_contact()
{
    this->print_menu();
    std::string info[5] = {"First Name", "Last Name", "Nickname",
                            "Phone", "Darkest Secret"};
    std::string *infos = contacts[this->new_one].get_info();
    std::cout << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << std::left << std::setw(20) << info[i] << std::right << " : ";
        std::getline(std::cin, infos[i]);
        while (!skip_whitespace(infos[i]))
        {
            std::getline(std::cin, infos[i]);
            if (std::cin.eof())
                exit(0);
        }
    }
    this->new_one = (this->new_one + 1) % 8;
    this->max += (this->max < 8);
    this->flag = 0;
    this->im = 2;
    *this->get_choice() = "";
    if (std::cin.eof())
        exit(0);
}

void    PhoneBook::search_contact()
{
    std::string a = "";
    std::string info[5] = {"First Name", "Last Name", "Nickname",
                            "Phone", "Darkest Secret"};
    if (!this->max)
        this->flag = 0,
        *this->get_choice() += "Empty contact";
    else
    {
        while(a.empty() || !skip_whitespace(a))
        {
            this->print_menu();
            print_info(this->contacts, this->max);
            std::cout << std::right << "\nSearch by index : ";
            std::getline(std::cin , a);
            if (a.length() == 1 && std::isdigit(a[0]) && a[0] - '0' < this->max)
            {
                this->flag = 1, im = 0;
                *this->get_choice() = "  🔍 For " + a;
                this->print_menu();
                std::cout << "\nMore information about " << *this->contacts[std::stoi(a)].get_info() << " :\n\n";
                for (int i = 0; i < 5; i++)
                    std::cout << std::left << "\t\t" << std::setw(20) << info[i] << " : " << this->contacts[std::stoi(a)].get_info()[i] << std::endl;
                std::getline(std::cin, a);
            }
            else
                im = 1, a = "", this->flag = 0,
                *this->get_choice() = "Error indexing  ❌";
            if (std::cin.eof())
                exit(0);
        }
        im = 2;
        std::cout << std::endl;
        *this->get_choice() = "";
    }
}