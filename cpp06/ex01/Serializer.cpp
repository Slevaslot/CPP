#include "Serializer.hpp"

Serializer::Serializer() {

}

Serializer::~Serializer() {

}

Serializer::Serializer(const Serializer & seri) {
    *this = seri;
}

Serializer& Serializer::operator=(const Serializer& truc) {
    (void)truc;
    return *this;
}

uintptr_t Serializer::serialize(Data* ptr) {
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw) {
    return reinterpret_cast<Data*>(raw);
}


Data::Data(int val) : nb(val) {}