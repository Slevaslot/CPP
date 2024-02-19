#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <map>
#include <stdexcept>
#include <iterator>
#include <cctype>
#include <algorithm>

class Span {
	private :
		int *_array;
		unsigned int _size;
	public :
		Span();
		Span(unsigned int n);
		Span(Span const & span);
		Span &operator=(Span const & span);
		~Span();
		void addNumber(int nb);
		int shortestSpan();
		int longestSpan();
};

#endif
