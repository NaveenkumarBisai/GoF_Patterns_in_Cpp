#include "MealBuilder.hpp"

int main() {
    MealBuilder builder;

    std::cout << "=== Veg Meal ===\n";
    Meal vegMeal = builder.prepareVegMeal();
    vegMeal.showItems();

    std::cout << "=== Non-Veg Meal ===\n";
    Meal nonVegMeal = builder.prepareNonVegMeal();
    nonVegMeal.showItems();

    std::cout << "=== Custom Meal (Veg + Pepsi) ===\n";
    Meal customMeal = builder.prepareCustomMeal(true, true, "Pepsi");
    customMeal.showItems();

    return 0;
}