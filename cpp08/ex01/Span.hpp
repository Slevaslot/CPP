#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <map>
#include <stdexcept>
#include <iterator>
#include <cctype>
#include <algorithm>

class Span {
	private :
		std::vector<int> _array;
		unsigned int _size;
		unsigned int _it;
	public :
		Span();
		Span(int n);
		Span(Span const & span);
		Span &operator=(Span const & span);
		~Span();
		void addNumber(const std::vector<int>::iterator &begin, const std::vector<int>::iterator &end);
		void addNumber(int nb);
		int shortestSpan();
		int longestSpan();
};

#endif
