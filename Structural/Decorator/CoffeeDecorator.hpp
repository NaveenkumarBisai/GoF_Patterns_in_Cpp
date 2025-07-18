#pragma once
#include "Coffee.hpp"
#include <memory>

class CoffeeDecorator : public Coffee {
protected:
    std::shared_ptr<Coffee> decoratedCoffee;

public:
    CoffeeDecorator(std::shared_ptr<Coffee> coffee) : decoratedCoffee(coffee) {}
    
    std::string getDescription() const override {
        return decoratedCoffee->getDescription();
    }

    double getCost() const override {
        return decoratedCoffee->getCost();
    }

    virtual ~CoffeeDecorator() = default;
};