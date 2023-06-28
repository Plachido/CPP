#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
#include <fstream>
#include <iostream>
#include <map>

class BitcoinExchange
{
    private:
        std::ifstream _db_file; //file with btc value over time
        std::ifstream _input_file; //file with dates and amount to convert
        std::map<std::string, double> _dict; //map associating btc value to date
    public:
        BitcoinExchange(std::string filename); //Constructor
        BitcoinExchange(const BitcoinExchange &src); //Copy constructor
        BitcoinExchange &operator=(const BitcoinExchange &other); //assignment operator
        double getExchangeRate(std::string, std::string); //two strings, date and amount (btc)
        void csvParser(); //parser for the csv file
        ~BitcoinExchange(); //Destructor
};

#endif