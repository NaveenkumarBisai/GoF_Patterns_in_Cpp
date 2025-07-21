#pragma once
#include <iostream>

class Light {
public:
    virtual ~Light() = default;
    virtual void turnOn() {
        // Default implementation (can be overridden)
        std::cout << "Light is turned on." << std::endl;
    };
    virtual void turnOff() {
        // Default implementation (can be overridden)
        std::cout << "Light is turned off." << std::endl;
    };
};