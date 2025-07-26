#pragma once
#include "State.hpp"
#include "DispensingState.hpp"
#include <iostream>

class HasMoneyState : public State {
public:
    void insertCoin(VendingMachine* /*machine*/) override {
        std::cout << "⚠️ Coin already inserted. Select an item.\n";
    }

    void selectItem(VendingMachine* machine, const std::string& item) override {
        std::cout << "🛒 Item selected: " << item << "\n";
        machine->setState(std::make_unique<DispensingState>());
    }

    void dispense(VendingMachine* /*machine*/) override {
        std::cout << "❌ Please select an item before dispensing.\n";
    }
};