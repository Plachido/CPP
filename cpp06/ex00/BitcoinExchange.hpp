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
        std::map<std::string, double> _rates; //map associating btc value to date
        std::map<std::string, double> _inputs;    
    public:
        void convert();
        bool check_date(std::string);
        BitcoinExchange(std::string filename); //Constructor
        BitcoinExchange(const BitcoinExchange &src); //Copy constructor
        BitcoinExchange &operator=(const BitcoinExchange &other); //assignment operator
        double getExchangeRate(std::string, std::string); //two strings, date and amount (btc)
        void parser(std::ifstream, std::map<std::string, double>, std::string); //generic parser called for both input and db
        ~BitcoinExchange(); //Destructor
};

#endif