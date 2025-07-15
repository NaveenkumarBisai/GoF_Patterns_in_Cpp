#pragma once
#include "Item.hpp"
#include <vector>
#include <memory>
#include <iostream>
#include <iomanip>

class Meal {
private:
    std::vector<std::unique_ptr<Item>> items;

public:
    void addItem(std::unique_ptr<Item> item) {
        items.push_back(std::move(item));
    }

    float getCost() const {
        float total = 0.0f;
        for (const auto& item : items) {
            total += item->price();
        }
        return total;
    }

    void showItems() const {
        std::cout << "Items in Meal:\n";
        for (const auto& item : items) {
            std::cout << "- " << std::left << std::setw(16) << item->name()
                      << "| Packing: " << std::setw(10) << item->packing()
                      << "| Price: ₹" << item->price() << '\n';
        }
        std::cout << "Total Cost: ₹" << getCost() << "\n\n";
    }
};