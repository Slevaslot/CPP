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
			_date.push_back(date);
			_value.push_back(value);
		}
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &truc) {
	*this = truc;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &truc) {
	this->map = truc.map;
	this->inp_map = truc.inp_map;
	return *this;
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::readInputFile(std::string input) {
	std::ifstream file(input.c_str());
	if (!file)
		std::cerr << "Error while opening " << input << std::endl;
	std::string line;
	std::string buff;
	bool if_first = true;
	it = 0;
	while (getline(file, buff))
		line += buff;
	_size = it;
	it = 0;
	for (it < line.length()) {
		if (if_first == true) {
			if_first = false;
			continue;
		}
		it = line.find("|", it);
		if (i != std::string::npos) {
			std::stringstream fl;
			float value;
			std::string date;
			for (size_t j = 0; j < it - 1; j++)
				date += line[j];
			date += '\0';
			k = line.find("\n", it);
			if (k != std::string::npos) {
				std::string line2 = line.substr(it, k);
				fl << line2;
				fl >> value;
				delete line2;
				it += k;
			}
			if (value < 0) {
				std::string err_msg = "Error: not a positive number\n";
				inp_map.insert(std::pair<std::string, float>(err_msg, -1));
				continue ;
			}
			else if (value > 1000) {
				std::string err_msg = "Error: too large number\n";
				inp_map.insert(std::pair<std::string, float>(err_msg, -1));
				continue ;
			}
			else
				inp_map.insert(std::pair<std::string, float>(date, value));
			std::cout << line << std::endl;
			for (std::map<std::string, float>::const_iterator it = inp_map.begin(); it != inp_map.end(); it++)
				std::cout << it->first << " | " << it->second << std::endl;
			std::cout << std::endl;
		}
		else  {
			std::string err_msg = "Error: bad input => " + line + "\n";
			inp_map.insert(std::pair<std::string, float>(err_msg, -1));
		}
	}
}
