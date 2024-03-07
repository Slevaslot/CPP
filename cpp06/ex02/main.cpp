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

void identify(Base &p){
    try {
        A a = dynamic_cast<A&>(p);
        std::cout << "Object is type of A" << std::endl;
    }
    catch (std::exception &truc) {}
    try {
        B b = dynamic_cast<B&>(p);
        std::cout << "Object is type of B" << std::endl;
    }
    catch (std::exception &truc) {}
    try {
        C c = dynamic_cast<C&>(p);
        std::cout << "Object is type of C" << std::endl;
    }
    catch (std::exception &truc) {}

}

int main(void) {
    Base *test = generate();
    identify(test);
    identify(*test);
    delete test;
}
