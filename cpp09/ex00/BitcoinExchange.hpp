#ifndef MUTANTSTACK
# define MUTANTSTACK

#include <iostream>
#include <vector>
#include <map>
#include <iterator>
#include <fstream>
#include <sstream>

class BitcoinExchange {
	public :
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &a);
		~BitcoinExchange();
		BitcoinExchange &operator=(const BitcoinExchange &a);
		void readInputFile(std::string input);

	private :
		std::vector<std::string> _date;
		std::vector<float> _value;
		size_t _size;
		std::string *_inp_date;
		int *_inp_date;
};

#endif
