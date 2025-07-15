#pragma once
#include <string>

class Item {
public:
    virtual std::string name() const = 0;
    virtual float price() const = 0;
    virtual std::string packing() const = 0;
    virtual ~Item() = default;
};

// Burger types
class VegBurger : public Item {
public:
    std::string name() const override { return "Veg Burger"; }
    float price() const override { return 25.0f; }
    std::string packing() const override { return "Wrapper"; }
};

class ChickenBurger : public Item {
public:
    std::string name() const override { return "Chicken Burger"; }
    float price() const override { return 50.0f; }
    std::string packing() const override { return "Wrapper"; }
};

// Drink types
class Coke : public Item {
public:
    std::string name() const override { return "Coke"; }
    float price() const override { return 15.0f; }
    std::string packing() const override { return "Bottle"; }
};

class Pepsi : public Item {
public:
    std::string name() const override { return "Pepsi"; }
    float price() const override { return 15.0f; }
    std::string packing() const override { return "Bottle"; }
};