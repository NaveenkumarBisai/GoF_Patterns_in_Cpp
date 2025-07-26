#pragma once
#include "State.hpp"
#include <iostream>

class HasMoneyState; // forward declaration

class IdleState : public State {
public:
    void insertCoin(VendingMachine* machine) override;
    void selectItem(VendingMachine* machine, const std::string& item) override;
    void dispense(VendingMachine* machine) override;
};