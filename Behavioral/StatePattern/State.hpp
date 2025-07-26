#pragma once
#include <string>

class VendingMachine; // Forward declaration

class State {
public:
    virtual void insertCoin(VendingMachine* machine) = 0;
    virtual void selectItem(VendingMachine* machine, const std::string& item) = 0;
    virtual void dispense(VendingMachine* machine) = 0;

    virtual ~State() = default;
};