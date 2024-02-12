#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>

class ScalarConverter {
	public :
		ScalarConverter();
		ScalarConverter(const ScalarConverter& ScalarConverter);
        ScalarConverter& operator=(const ScalarConverter& ScalarConverter);
        virtual ~ScalarConverter() = 0;
		void static convert(std::string av);
};

#endif