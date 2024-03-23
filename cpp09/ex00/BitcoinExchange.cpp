#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::ifstream file("data.csv");
	if (!file)
	{
		std::cerr << "Error while opening data.csv file" << std::endl;
		return;
	}
	std::string line;
	bool if_first = true;
	while (getline(file, line)) {
		size_t i = 0;
		if (if_first == true) {
			if_first = false;
			continue;
		}
		i = line.find(",", i);
		if (i != std::string::npos) {
			std::stringstream fl;
			float value;
			std::string date;
			for (size_t j = 0; j < i; j++)
				date += line[j];
			date += '\0';
			fl << &line[i + 1];
			fl >> value;
			_data.insert(std::pair<std::string, float>(date, value));
		}
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &truc) {
	*this = truc;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &truc) {
	this->_data = truc._data;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

bool isValidDate(int year, int month, int day) {
	if (year < 1)
		return false;
	else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		return day >= 1 && day <= 31;
	else if (month == 4 || month == 6 || month == 9 || month == 11)
    	return day >= 1 && day <= 30;
    else if (month == 2)
      return (year % 4 == 0) ? (day >= 1 && day <= 29) : (day >= 1 && day <= 28);
  return false;
}

void BitcoinExchange::readInputFile(std::string input) {
	std::string line;
	std::string buff;
	bool if_first = true;
	std::ifstream file(input.c_str());
	if (!file)
		std::cerr << "Error while opening " << input << std::endl;

	while (getline(file, line)) {
		if (if_first == true) {
			if_first = false;
			continue;
		}
		size_t j = line.find("|", 0);
		if (j != std::string::npos) {
			std::stringstream fl, dt;
			float value;
			std::string date;
			int year, month, day;

			date = line.substr(0, j);
    		dt << date;
    		dt >> year >> month >> day;
			month *= -1;
			day *= -1;
			std::string line2 = line.substr(j + 1, line.length());
			fl << line2;
			fl >> value;

   			if (!isValidDate(year, month, day))
      			std::cout << "Error: invalid date: " << line << std::endl;
			else if (value < 0)
				std::cout << "Error: not a positive number" << std::endl;
			else if (value > 1000)
				std::cout << "Error: too large number" << std::endl;
			else {
				std::multimap<std::string, float>::iterator ite = _data.upper_bound(date);
				std::cout << date << " => " << value << " = " << (--ite)->second * value <<std::endl;
			}
		}
		else if (line.length())
			std::cout << "Error: bad input => " + line << std::endl;
	}
}
