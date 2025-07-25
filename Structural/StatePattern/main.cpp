#include "VendingMachine.hpp"
#include "IdleState.hpp"
#include <memory>

int main() {
    std::cout << "🟢 Vending Machine Ready\n";

    // Start in Idle state
    VendingMachine machine(std::make_unique<IdleState>());

    machine.selectItem("Soda");    // Should ask for coin
    machine.insertCoin();          // Insert coin, move to HasMoney
    machine.insertCoin();          // Already has coin
    machine.dispense();            // Should ask to select item
    machine.selectItem("Soda");    // Select item, move to Dispensing
    machine.dispense();            // Dispense, return to Idle

    return 0;
}