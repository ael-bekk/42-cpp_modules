#include <iostream>
#include <iomanip>
#include <cmath>

class ScalarConverter {
    public:
        static void convert(std::string s) {
            float a = 0;
            if (s == "nan" || s == "-inf" || s == "+inf" || s == "-inff" || s == "+inff" || std::isdigit(s[0]) || s[0] == '+' || s[0] == '-')
                a = std::stof(s);
            if (std::isnan(a) || std::isinf(a))
            {
                std::cout << "char: impossible" << std::endl;
                std::cout << "int: impossible" << std::endl;
            } else {
                std::cout << "char: '" << static_cast<char>(a) << "'" << std::endl;
                std::cout << "int: " << static_cast<int>(a) << std::endl;
            }
            std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(a) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(a) << std::endl;
        }
};

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ScalarConverter c;
        c.convert(av[1]);
    }
    return 0;
}