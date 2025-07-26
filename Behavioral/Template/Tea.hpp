#pragma once
#include "Beverage.hpp"

class Tea : public Beverage {
public:
    void brew() override {
        std::cout << "Steeping the tea leaves...\n";
    }

    void addCondiments() override {
        std::cout << "Adding lemon...\n";
    }
};