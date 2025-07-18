#pragma once
#include "CoffeeDecorator.hpp"

class MilkDecorator : public CoffeeDecorator {
public:
    MilkDecorator(std::shared_ptr<Coffee> coffee) : CoffeeDecorator(coffee) {};
    double getCost() const override {
        return decoratedCoffee->getCost() + 0.5; // Adding cost of milk
    }
    std::string getDescription() const override {
        return decoratedCoffee->getDescription() + ", Milk"; // Adding milk to description
    }
    virtual ~MilkDecorator() = default;
};