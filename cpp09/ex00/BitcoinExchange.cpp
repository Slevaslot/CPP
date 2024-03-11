#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	std::ifstream file("data.csv");
	if (!file)
		std::cerr << "Error while opening data.csv file" << std::endl;
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

void BitcoinExchange::readInputFile(std::string input) {
	std::ifstream file(input.c_str());
	if (!file)
		std::cerr << "Error while opening " << input << std::endl;
	std::string line[MAX];
	std::string buff;
	bool if_first = true;
	size_t it = 0;
	for (int i = 0; getline(file, line[i]); i++)
		;
	while (line[it].length()) {
		if (if_first == true) {
			if_first = false;
			it++;
			continue;
		}
		size_t j = line[it].find("|", 0);
		if (j != std::string::npos) {
			std::stringstream fl;
			float value;
			std::string date;
			date = line[it].substr(0, j);
			std::string line2 = line[it].substr(j + 1, line[it].length());
			fl << line2;
			fl >> value;
			if (value < 0)
				std::cout << "Error: not a positive number\n";
			else if (value > 1000)
				std::cout << "Error: too large number\n";
			else {
				std::multimap<std::string, float>::iterator ite = _data.upper_bound(date);
				std::cout << date << " => " << value << " = " << (--ite)->second * value <<std::endl;
			}
		}
		else
			std::cout << "Error: bad input => " + line[it] + "\n";
		it++;
	}
}
