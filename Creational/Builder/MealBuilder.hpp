#pragma once
#include "Meal.hpp"

class MealBuilder {
public:
    Meal prepareVegMeal() {
        Meal meal;
        meal.addItem(std::make_unique<VegBurger>());
        meal.addItem(std::make_unique<Coke>());
        return meal;
    }

    Meal prepareNonVegMeal() {
        Meal meal;
        meal.addItem(std::make_unique<ChickenBurger>());
        meal.addItem(std::make_unique<Pepsi>());
        return meal;
    }

    Meal prepareCustomMeal(bool isVeg, bool wantDrink, std::string drinkChoice = "Coke") {
        Meal meal;
        if (isVeg)
            meal.addItem(std::make_unique<VegBurger>());
        else
            meal.addItem(std::make_unique<ChickenBurger>());

        if (wantDrink) {
            if (drinkChoice == "Pepsi")
                meal.addItem(std::make_unique<Pepsi>());
            else
                meal.addItem(std::make_unique<Coke>());
        }

        return meal;
    }
};