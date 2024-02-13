#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template <typename T>

void swap(T &x, T &y) {
	T swap = x;
	x = y;
	y = swap;
}

template <typename T>

T min(T &x, T &y) {
	if (x > y)
		return y;
	else if (x < y)
		return x;
	else
		return y;
}

template <typename T>

T max(T &x, T &y) {
	if (x > y)
		return x;
	else if (x < y)
		return y;
	else
		return y;
}


#endif
