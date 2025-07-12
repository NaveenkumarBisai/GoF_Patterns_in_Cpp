#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <iostream>
#include <mutex>

// Thread-safe lazy Singleton in modern C++
class Singleton {
private:
    static Singleton* instance;
    static std::mutex mtx;

    // Private constructor
    Singleton() {
        std::cout << "✅ Singleton Constructor Called\n";
    }

public:
    // Delete copy and move constructors
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    // Static access method
    static Singleton* getInstance() {
        std::lock_guard<std::mutex> lock(mtx);
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void doSomething() const {
        std::cout << "🔧 Singleton is doing something useful.\n";
    }
};

// Initialize static members
Singleton* Singleton::instance = nullptr;
std::mutex Singleton::mtx;

#endif // SINGLETON_HPP