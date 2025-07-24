#pragma once
#include <iostream>

class Beverage {
public:
    // The template method (non-virtual)
    void prepareRecipe() {
        boilWater();
        brew();
        pourInCup();
        addCondiments();
    }

    // Common steps
    void boilWater() {
        std::cout << "Boiling water...\n";
    }

    void pourInCup() {
        std::cout << "Pouring into cup...\n";
    }

    // Variable steps - to be defined by subclass
    virtual void brew() = 0;
    virtual void addCondiments() = 0;

    virtual ~Beverage() = default;
};