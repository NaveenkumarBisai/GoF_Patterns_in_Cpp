#pragma once
#include "Beverage.hpp"

class Coffee : public Beverage {
public:
    void brew() override {
        std::cout << "Dripping coffee through filter...\n";
    }

    void addCondiments() override {
        std::cout << "Adding sugar and milk...\n";
    }
};