#include "Serializer.hpp"

int main(void) {
    Data test1(42);

    std::cout << "test1.nb : " << test1.nb << std::endl;
    uintptr_t test2 = Serializer::serialize(&test1);
    Data *test3 = Serializer::deserialize(test2);
    std::cout << "test3->nb : " << test3->nb << std::endl;
}
