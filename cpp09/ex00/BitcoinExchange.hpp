#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
#include <fstream>
#include <iostream>
#include <map>
#include <string>
#include <vector>

class BitcoinExchange
{
    private:
        std::ifstream _db_file; //file with btc value over time
        std::ifstream _input_file; //file with dates and amount to convert
    public:
        std::map<std::string, std::string> rates; //map associating btc value to date
        std::vector<std::pair<std::string, std::string>>inputs; //vector of pairs of date and amount to convert
        void convert();
        bool check_date(std::string);
        BitcoinExchange(std::string filename); //Constructor
        //BitcoinExchange(const BitcoinExchange &src); //Copy constructor
        //BitcoinExchange &operator=(const BitcoinExchange &other); //assignment operator
        double getExchangeRate(std::string, std::string); //two strings, date and amount (btc)
        void parse_db(std::ifstream&, std::map<std::string, std::string>&, std::string); //parser called for db
        void parse_input(std::ifstream&, std::vector<std::pair<std::string, std::string>>&, std::string); //parser called for input
        bool check_value(std::string);
        ~BitcoinExchange(); //Destructor
};

#endif