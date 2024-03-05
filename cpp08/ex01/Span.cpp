#include "Span.hpp"

Span::Span() {
	_size = 0;
	_it = 0;
}

Span::Span(int n) {
	_it = 0;
	if (n <= 0)
	{
		_size = 0;
		throw std::length_error("Array cannot be of negative or null size\n");
	}
	else
		_size = n;
}

Span::Span(Span const & span) {
	*this = span;
}

Span &Span::operator=(Span const & span) {
	_array = span._array;
	_size = span._size;
	_it = span._it;
	return (*this);
}

Span::~Span() {

};

void Span::addNumber(int n) {
	if (_size == 0)
		throw std::length_error("Cannot add a number in a Null array\n");
	else if (_it == _size) {
		throw std::length_error("Cannot add a number beyond the array's size\n");
	}
	else {
		_array.push_back(n);
		_it++;
	}
}

void Span::addNumber(const std::vector<int>::iterator &start, const std::vector<int>::iterator &end)
{
	if (end < start)
	{
		std::cerr << *end << " " << *start;
		return ;
	}
	_array.insert(_array.end(), start, end);
	_it = std::distance(start, end);
}

int Span::shortestSpan() {
	if (_it < 2)
		throw std::length_error("Cannot find shortest span in an array with a size lower than 2\n");
	int span = 2147483647;
	size_t it;
	std::vector<int> sorted_array = _array;
	std::sort(sorted_array.begin(), sorted_array.end());
	for (std::vector<int>::iterator i = sorted_array.begin(); i < sorted_array.end(); ++i) {
		it = std::distance(sorted_array.begin(), i );
		if (it != 0 && sorted_array[it] - sorted_array[it - 1] < span)
			span = sorted_array[it] - sorted_array[it - 1];
	}
	return span;
}

int Span::longestSpan() {
	if (_it < 2)
		throw std::length_error("Cannot find longest span in an array with a size lower than 2");
	std::vector<int> sorted_array = _array;
	std::sort(sorted_array.begin(), sorted_array.end());
	return sorted_array[_it - 1] - sorted_array[0];
}
