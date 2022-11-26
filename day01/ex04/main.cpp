#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char *av[])
{
    std::ifstream f1;
    std::ofstream f2;

    if (ac != 4)
        return (0);
    std::string s = av[1];
    f1.open(av[1]);
    f2.open(s + ".replace");
    std::string str;
    std::string s1 = av[2];
    std::string s2 = av[3];
    while (std::getline(f1, str))
    {
        int pos = 0;
        while (s1.length() && (pos = str.find(s1, pos)) != -1)
            str.erase(pos, s1.length()),
            str.insert(pos, s2),
            pos += s2.length();
        f2 << str << std::endl;
    }
    f1.close();
    f2.close();
    return 0;
}