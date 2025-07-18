#include "SimpleCoffee.hpp"
#include "MilkDecorator.hpp"
#include "SugarDecorator.hpp"
#include "WhipDecorator.hpp"
#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<Coffee> coffee = std::make_shared<SimpleCoffee>();

    std::cout << coffee->getDescription() << " | Cost: $" << coffee->getCost() << "\n";

    coffee = std::make_shared<MilkDecorator>(coffee);
    coffee = std::make_shared<SugarDecorator>(coffee);
    coffee = std::make_shared<WhipDecorator>(coffee);

    std::cout << coffee->getDescription() << " | Cost: $" << coffee->getCost() << "\n";

    return 0;
}