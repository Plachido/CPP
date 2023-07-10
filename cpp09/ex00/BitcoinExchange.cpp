#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string filename)
{
    this->_db_file.open("data.csv");
    this->_input_file.open(filename);
    if (!_input_file.is_open())
    {
        std::cout << "Error: could not open file." << std::endl;
        return;
    }
    parse_input(_input_file, inputs, " | ");
    parse_db(_db_file, rates, ",");
    /*
    for (const auto& p : rates) {
        std::cout << p.first << std::endl; // "Karl", "George"
        // p.second is Employee object.
    }
    */
}

BitcoinExchange::~BitcoinExchange()
{
    _input_file.close();
    _db_file.close();
}
/*
BitcoinExchange::BitcoinExchange(const BitcoinExchange &src)
{
	*this = src;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
	this -> _db_file = other._db_file;
    this -> _input_file = other._input_file;
	return *this;
}
*/
bool BitcoinExchange::check_date(std::string date)
{
    if (date.length() != 10)
    {
        return false;
    }
    if (date[4] != '-' || date[7] != '-')
    {
        return false;
    }
    for (int i = 0; i < 10; i++)
    {
        if (i == 4 || i == 7)
            continue;
        if (!isdigit(date[i]))
        {
            return false;
        }
    }
    //std::cout << "converting year" << std::endl;
    int year = std::stoi(date.substr(0, 4));
    //std::cout << "converting month" << std::endl;
    int month = std::stoi(date.substr(5, 2));
    //std::cout << "converting day" << std::endl;
    int day = std::stoi(date.substr(8, 2));
    if (year <= 1900 || year >= 2023)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;
    return true;
}

bool BitcoinExchange::check_value(std::string value)
{
    //std::cout << "converting value" << value << std::endl;
    int val = std::stod(value);
    if (val < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    else if (val > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}

void BitcoinExchange::parse_input(std::ifstream &file, std::vector<std::pair<std::string, std::string>> &vec, std::string delimitator)
{
    std::string date;
    std::string n;
    std::string line;
    int i = 0;
    
    while (std::getline(file, line))
        if (i++)
        {
            date = line.substr(0, line.find(delimitator));
            n = line.substr(line.find(delimitator) + delimitator.length(), line.length());
            //if (delimitator == " | ")
                //std::cout << n << std::endl;
            vec.push_back(std::pair<std::string, std::string>(date, n));
        }
}


void BitcoinExchange::parse_db(std::ifstream &file, std::map<std::string, std::string> &map, std::string delimitator)
{
    std::string date;
    std::string n;
    std::string line;
    int i = 0;
    
    while (std::getline(file, line))
        if (i++)
        {
            date = line.substr(0, line.find(delimitator));
            n = line.substr(line.find(delimitator) + delimitator.length(), line.length());
            //if (delimitator == " | ")
                //std::cout << n << std::endl;
            map.insert(std::map<std::string, std::string>::value_type(date, n));
        }
}


void BitcoinExchange::convert()
{

    //std::map<std::string, std::string>::iterator input_it;
    std::map<std::string, std::string>::iterator rates_it;
    std::map<std::string, std::string>::iterator previous;



    for (std::vector< std::pair < std::string, std::string > >::iterator input_it = inputs.begin(); input_it != inputs.end(); input_it++)
    {
        std::string input_date = input_it->first;
        //std::cout<< input_date.length() << std::endl;
        if (!check_date(input_it->first))
        {
            std::cout << "Error: bad input => " << input_it->first <<std::endl;
            continue;
        }
        if (!check_value(input_it->second))
            continue;
        for (rates_it = rates.begin(); rates_it != rates.end(); rates_it++)
        {
            if (rates_it->first == input_it->first)
            {
                std::cout << input_it->first << " => " << std::stod(input_it->second) * std::stod(rates_it->second) << std::endl;
                break;
            }
            else if (rates_it->first > input_it->first)
            {
                std::cout << input_it->first << " => " << std::stod(input_it->second) * std::stod(previous->second) << std::endl;
                break;
            }
            previous = rates_it;
        }
    }
}
