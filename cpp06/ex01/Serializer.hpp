#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <stdint.h>

struct Data {
    int nb;
    Data(int val);
};

class Serializer {
	public :
		Serializer();
		Serializer(const Serializer& Serializer);
        Serializer& operator=(const Serializer& Serializer);
        virtual ~Serializer() = 0;
        static Data* deserialize(uintptr_t raw);
        static uintptr_t serialize(Data* ptr);
};

#endif