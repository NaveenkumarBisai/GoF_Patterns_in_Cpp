#pragma once
#include "CoffeeDecorator.hpp"

class WhipDecorator : public CoffeeDecorator {
public:
    WhipDecorator(std::shared_ptr<Coffee> coffee) : CoffeeDecorator(coffee) {};
    double getCost() const override {
        return decoratedCoffee->getCost() + 0.7; // Adding cost of whip
    }
    std::string getDescription() const override {
        return decoratedCoffee->getDescription() + ", Whip"; // Adding whip to description
    }
    virtual ~WhipDecorator() = default;
};