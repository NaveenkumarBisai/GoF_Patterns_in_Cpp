#pragma once
#include <string>
#include <iostream>

class Observer {
public:
    virtual void update(const std::string& message) = 0;
    virtual ~Observer() = default;
};

class LoggerObserver : public Observer {
public:
    void update(const std::string& message) override {
        std::cout << "[Logger] Logged image: " << message << std::endl;
    }
};

class DisplayObserver : public Observer {
public:
    void update(const std::string& message) override {
        std::cout << "[Display] Showing image on screen: " << message << std::endl;
    }
};