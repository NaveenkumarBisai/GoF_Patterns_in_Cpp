#include <iostream>
#include "Circle.hpp"
#include "Square.hpp"
#include "Group.hpp"

int main() {
    // Create individual shapes
    auto circle1 = std::make_shared<Circle>();
    auto square1 = std::make_shared<Square>();

    // Create a group of shapes
    auto group1 = std::make_shared<Group>("Group1");
    group1->add(circle1);
    group1->add(square1);

    // Create another shape and a nested group
    auto circle2 = std::make_shared<Circle>();
    auto group2 = std::make_shared<Group>("Group2");
    group2->add(circle2);
    group2->add(group1); // group inside group

    // Draw the top-level group
    group2->draw();

    return 0;
}