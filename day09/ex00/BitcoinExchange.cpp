#include "BitcoinExchange.hpp"

BitcoinExchangeBase::BitcoinExchangeBase() {}

BitcoinExchangeBase::BitcoinExchangeBase(std::string filename)
{
    std::ifstream   file;
    std::string     buffer;

    file.open(filename);

    file >> buffer;
    while (file >> buffer)
    {
        int date = std::stoi(buffer) * 10000 + std::stoi(buffer.substr(5)) * 100 + std::stoi(buffer.substr(8));
        double rate = std::stod(buffer.substr(11));
        this->_data_base.insert(std::make_pair(date, rate));
    }
    file.close();
}

BitcoinExchangeBase::~BitcoinExchangeBase() {}

void    Exchange::CheckBtc(std::string &btc)
{
    int first = btc.find_first_of(',');
    int last = btc.find_last_of(',');

    if (first == -1)
        first = btc.find_first_of('.'),
        last = btc.find_last_of('.');
    else
        btc[first] = '.';

    if (first != last || first == 0 || first == btc.length() - 1)
        throw std::invalid_argument("Invalid Value Of Bitcoin");

    for (size_t i = 0; i < btc.length(); i++)
        if (btc[i] != '.' && !std::isdigit(btc[i]))
            throw std::invalid_argument("Invalid Value Of Bitcoin");
}

void    Exchange::CheckDate(int month, int date)
{
    int monthdays [] = {31,29,31,30,31,30,31,31,30,31,30,31};
    if (month < 1 || month > 12 || monthdays[month - 1] < date || date < 1)
        throw std::invalid_argument("Wrong Date Format");
}

std::pair <int, double>    Exchange::CheckInp(std::string line)
{
    std::string date, sep, btc;

    if (line.size() < 14)
        throw std::invalid_argument("Invalid Format");

    date = line.substr(0,10);
    sep = line.substr(10, 3);
    btc = line.substr(13);

    if (!date.size() || !sep.size() || !btc.size() || line[4] != '-' || line[7] != '-' || sep != " | ")
        throw std::invalid_argument("Invalid Format");

    int year = std::stoi(date);
    int month = std::stoi(date.substr(5));
    int day = std::stoi(date.substr(8));

    CheckBtc(btc);
    CheckDate(month, day);

    int full_date = (year * 10000) + (month * 100) + day;
    double Bitcoins = std::stod(btc);

    if (Bitcoins < 1 || Bitcoins > 1000)
        throw std::invalid_argument("BTC : out of range");
    std::cout << date;
    return std::make_pair(full_date, Bitcoins);
}

void Exchange::CalculateExchange(std::string filename, std::map <int, double> _data_base) {
    std::ifstream file;
    std::string buffer;

    file.open(filename);
    
    while (std::getline(file, buffer))
    {
        try
        {
            std::pair <int, double> Input = CheckInp(buffer);
            std::map <int, double>::iterator p = _data_base.upper_bound(Input.first);
            if (p == _data_base.begin())
                std::cout << "\rDate doesn't exist\n";
            else
            {
                p--;
                std::cout << " => " << Input.second << " = " << static_cast<double>(((*p).second * Input.second)) << "\n";
            }
        }
        catch (std::exception &a)
        {
            std::cerr << a.what() << "\n";
        }
    }
    file.close();
}


