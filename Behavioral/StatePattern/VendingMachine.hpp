#pragma once
#include "State.hpp"
#include <memory>
#include <iostream>

class VendingMachine {
private:
    std::unique_ptr<State> currentState;

public:
    VendingMachine(std::unique_ptr<State> initialState)
        : currentState(std::move(initialState)) {}

    void setState(std::unique_ptr<State> newState) {
        currentState = std::move(newState);
    }

    void insertCoin() {
        currentState->insertCoin(this);
    }

    void selectItem(const std::string& item) {
        currentState->selectItem(this, item);
    }

    void dispense() {
        currentState->dispense(this);
    }

    ~VendingMachine() = default;
};