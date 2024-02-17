#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {
    srand( time( NULL ) );
    int nb = rand();
    if (nb % 3 == 0)
        return new A;
    else if (nb % 3 == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "Object is type of A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "Object is type of B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "Object is type of C" << std::endl;

}

// void identify(Base& p){
    
// }

int main(void) {
    Base *test = generate();
    identify(test);
    delete test;
}