#include "BitcoinExchange.hpp"

int main()
{
    BitcoinExchangeBase base("data.csv");
    Exchange::CalculateExchange("input.csv", base._data_base);
}