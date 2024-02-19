#include "Span.hpp"

Span::Span() {
	_array = new (42);
	_size = 42;
}

Span::Span(unsigned int n) {
	_array = new (n);
	_size = n;
}

Span::Span(Span const & span) {
	*this = span;
}

Span &Span::operator=(Span const & span) {
	_array = span->_array;
	_size = span->_size;
	return (*this);
}

Span::~Span() {
	delete (_array);
};

void Span::addNumber(int n) {
	static int i = 0;
	_array[i] = n;
	i++;
}

int Span::shortestSpan() {
	for (int i = 0;  i < _size; i++) {
		
	}
}

int Span::longestSpan() {

}
