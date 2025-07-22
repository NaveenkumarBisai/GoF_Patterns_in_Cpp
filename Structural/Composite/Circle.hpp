#pragma once
#include "Graphic.hpp"
#include <iostream>

class Circle : public Graphic {
public:
    void draw() const override {
        std::cout << "🔵 Drawing a Circle\n";
    }

    std::string name() const override {
        return "Circle";
    }
};