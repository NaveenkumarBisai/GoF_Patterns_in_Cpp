#include "Tea.hpp"
#include "Coffee.hpp"

int main() {
    std::cout << "\n☕ Preparing Coffee:\n";
    Coffee coffee;
    coffee.prepareRecipe();

    std::cout << "\n🍵 Preparing Tea:\n";
    Tea tea;
    tea.prepareRecipe();

    return 0;
}