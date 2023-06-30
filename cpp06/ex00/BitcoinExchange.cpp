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
    parser(_input_file, _inputs, ",");
    parser(_db_file, _rates, " | ");
}

BitcoinExchange::~BitcoinExchange()
{
    _input_file.close();
    _db_file.close();
    _prices.clear();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	this -> _db_file = other._db_file;
    this -> _input_file = other._input_file;
    this -> _prices = other._prices;
	return *this;
}


bool BitcoinExchange::check_date(std::string date)
{
    if (date.length() != 10)
        return false;
    if (date[4] != '-' || date[7] != '-')
        return false;
    for (int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (!isdigit(date[i]))
            return false;
    }
    std::string year = date.substr(0, 4);
    std::string month = date.substr(5, 2);
    std::string day = date.substr(8, 2);

    if (std::stoi(year) <= 1900 || std::stoi(year) >= 2023)
        return false;
    if (std::stoi(month) < 1 || std::stoi(month) > 12)
        return false;
    if (std::stoi(day) < 1 || std::stoi(day) > 31)
        return false;
    return true;
}



void BitcoinExchange::parser(std::ifstream file, std::map<std::string, double> map, std::string delimitator)
{
    std::string date;
    std::string n;
    std::string line;
    int i = 0;
    
    while (std::getline(file, line))
        if (i++)
        {
            date = line.substr(0, line.find(delimitator));
            date = date_conversion(date)
            n = line.substr(line.find(delimitator) + 1, line.length());
            map.insert(std::map<std::string, int>::value_type(date, n));
        }


}

void convert()
{
    map<string, int>::iterator input_it;
    map<string, int>::iterator rates_it;

    for (input_it = _input.begin(); input_it != _input.end(); input_it++)
    {
        check_date(input_it->first));
        check_value(input_it->second));
        for (rates_it = _rates.begin(); rates_it != rates.end(); rates_it++)
        {
            while (rates_it->first < input_it->first)
                ;
            if (rates_it->first > input_it->first)
                rates_it--;
            std::cout << input_it->first << " => " << input_it->second*rates_it->second << std::endl;
        }
    }
}
