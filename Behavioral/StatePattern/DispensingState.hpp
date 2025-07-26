#pragma once
#include "State.hpp"
#include "VendingMachine.hpp"
#include <iostream>

class IdleState; // 👈 Forward declaration

class DispensingState : public State {
public:
    void insertCoin(VendingMachine* /*machine*/) override {
        std::cout << "⏳ Please wait. Dispensing in progress.\n";
    }

    void selectItem(VendingMachine* /*machine*/, const std::string& /*item*/) override {
        std::cout << "⏳ Already processing an item.\n";
    }

    void dispense(VendingMachine* machine) override {
        std::cout << "🎁 Dispensing your item...\n";
        machine->setState(std::unique_ptr<State>(new IdleState()));  // 👈 Avoids needing full definition here
        std::cout << "✅ Ready for next customer.\n";
    }
};