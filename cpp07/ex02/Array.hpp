#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <stdexcept>

template <typename T>

class Array {
	private :
		T *_array;
		unsigned int _size;
	public :
		Array() {
		    _array = new T[42];
		    _size = 42;
		}

		Array(unsigned int n) {
		    _array = new T[n];
		    _size = n;
		}

		Array(Array const &arr) {
		    *this = arr;
		}

		Array& operator=(Array const &arr) {
		    this->_array = arr._array;
		    this->_size = arr._size;
		    return *this;
		}

		T& operator[](unsigned int n) {
		    if (n >= _size)
		        throw std::out_of_range("Index you try to access is out of bounds\n");
		    else
		        return _array[n];
		}

		unsigned int size() {
		    return _size;
		}
};

#endif
