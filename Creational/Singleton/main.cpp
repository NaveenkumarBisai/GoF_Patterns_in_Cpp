// Creational/Singleton/main.cpp
#include "Singleton.hpp"

int main() {
    Singleton* s1 = Singleton::getInstance();
    s1->doSomething();

    Singleton* s2 = Singleton::getInstance();
    s2->doSomething();

    std::cout << "Are s1 and s2 the same? " << (s1 == s2 ? "Yes" : "No") << "\n";

    return 0;
}
