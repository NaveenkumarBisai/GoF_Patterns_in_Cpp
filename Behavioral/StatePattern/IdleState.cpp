#include "IdleState.hpp"
#include "HasMoneyState.hpp"
#include "VendingMachine.hpp"

void IdleState::insertCoin(VendingMachine* machine) {
    std::cout << "💰 Coin inserted. You can now select an item.\n";
    machine->setState(std::make_unique<HasMoneyState>());
}

void IdleState::selectItem(VendingMachine* /*machine*/, const std::string& /*item*/) {
    std::cout << "❌ Please insert a coin first.\n";
}

void IdleState::dispense(VendingMachine* /*machine*/) {
    std::cout << "❌ Can't dispense. No item selected.\n";
}