#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string filename)
{
    this->_db_file.open("./db/data.csv");
    this->_input_file.open(filename);
    if (!_input_file.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return;
    }
    this->csvParser();
}

void BitcoinExchange::csvParser(){};

BitcoinExchange::~BitcoinExchange(){};