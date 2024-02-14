#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>

void printarray(T array) {
	std::cout << array;
}

template <typename T>

void iter(T *array, unsigned int size, void (*func)(T array)) {
	for (unsigned int i = 0; i < size; i++) {
		func(array[i]);
	}
}

#endif
