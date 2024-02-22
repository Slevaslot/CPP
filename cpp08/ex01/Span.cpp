#include "Span.hpp"

Span::Span(): _array(0) {
	_size = 0;
}

Span::Span(int n): _array(0) {
	if (n <= 0)
	{
		_size = 0;
		throw std::invalid_argument("Array cannot be of negative size\n");
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
	return (*this);
}

Span::~Span() {

};

void Span::addNumber(int n) {
	static unsigned int i = 0;
	if (_size == 0)
		throw std::out_of_range("Cannot add a number in a Null array\n");
	else if (i == _size) {
		throw std::out_of_range("Cannot add a number beyond the array's size\n");
	}
	else {
		_array.push_back(n);
		i++;
	}
}

int Span::shortestSpan() {
	if (_size < 2 || !_array[1])
		throw std::length_error("Cannot find shortest span in an array with a size lower than 2");
	int span = 2147483647;
	size_t it;
	std::vector<int> sorted_array = _array;
	std::sort(sorted_array.begin(), sorted_array.end());
	for (std::vector<int>::iterator i = sorted_array.begin(); i < sorted_array.end(); ++i) {
		it = std::distance(sorted_array.begin(), i);
		if (sorted_array[it] - sorted_array[it - 1] < span)
		{
			span = sorted_array[it] - sorted_array[it - 1];
		}
	}
	return span;
}

int Span::longestSpan() {
	if (_size < 2 || !_array[1])
		throw std::length_error("Cannot find longest span in an array with a size lower than 2");
	std::vector<int> sorted_array = _array;
	std::sort(sorted_array.begin(), sorted_array.end());
	return sorted_array[_size - 1] - sorted_array[0];
}

void Span::fillArray(int nb, int it) {
	for (int i = 0; i < it; i++)
		addNumber(nb);
}
