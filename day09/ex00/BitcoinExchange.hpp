#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__

#include <iostream>
#include <map>
#include <string>
#include <fstream>

class BitcoinExchangeBase
{
    public:
        std::map <int, double> _data_base;
        BitcoinExchangeBase();
        BitcoinExchangeBase(std::string filename);
        ~BitcoinExchangeBase();
};

class Exchange
{
    private:
        Exchange() {}
    public:
        static std::pair <int, double>  CheckInp(std::string line);
        static void                     CalculateExchange(std::string filename, std::map <int, double> _data_base);
        static void                     CheckBtc(std::string &btc);
        static void                     CheckDate(int month, int date);
};

#endif