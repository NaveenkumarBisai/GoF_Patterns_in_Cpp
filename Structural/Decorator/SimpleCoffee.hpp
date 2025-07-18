#pragma once
#include "Coffee.hpp"

class SimpleCoffee : public Coffee {
public:
    double getCost() const override {
        return 1.0; // Base cost of simple coffee
    }
    std::string getDescription() const override {
        return "Simple Coffee"; // Description of simple coffee
    }
};