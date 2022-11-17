#include "PhoneBook.hpp"

PhoneBook::PhoneBook():new_one(0),max(0){}

void    print_info(Contact *user, int count)
{
    std::cout << "_____________________________________________\n";
    std::cout << "| Idx | First Name | Last Name  |  Nickname  |\n";
    for (int i = 0; i < count; i++)
    {
        std::cout << "_____________________________________________\n";
        std::cout << "|  " << i << "  |";
        for (int j = 0; j < 3; j++)
        {
            std::cout << " ";
            for (size_t k = 0; k < 10; k++)
                if (k == 9 &&  user[i].info[j].size() > 10)
                    std::cout << ".";
                else if (k < user[i].info[j].size())
                    std::cout << user[i].info[j][k];
                else
                    std::cout << " ";
            std::cout << " |";
        }
    }
    std::cout << "\n_____________________________________________\n";
}

void    PhoneBook::add_contact()
{
    std::string info[5] = {"First Name : ", "Last Name : ", "Nickname : ",
                            "Phone : ", "Darkest Secret : "};
    for (int i = 0; i < 5; i++)
    {
        std::cout << info[i];
        std::getline(std::cin, contacts[this->new_one].info[i]);
        while (contacts[this->new_one].info[i].empty())
            std::getline(std::cin, contacts[this->new_one].info[i]);
    }
    this->new_one = (this->new_one + 1) % 8;
    this->max += (this->max < 8);
    print_info(this->contacts, this->max);
}


void    PhoneBook::search_contact()
{
    std::string info[4] = {"Index : " ,"First Name : ", "Last Name : ", "Nickname : "};

    for (size_t i = 0; i < 4; i++)
    {
        std::cout << info[i];
    }
}

int main()
{
    PhoneBook mobile;
    std::string choice;
    std::cout << "Usage :   ADD (Insert New Contact) \n";
    std::cout << "          SEARCH (Search for saved contacts) \n";
    std::cout << "          EXIT (-_-) \n";

    while (1)
    {
        std::cin >> choice;
        if (choice == "ADD")
            mobile.add_contact();
        else if (choice == "SEARCH")
            mobile.search_contact();
        else if (choice == "EXIT")
            break ;
        else
        {
            std::cout << choice << " :Command not found\n";
        }
    }
    return (0);
}