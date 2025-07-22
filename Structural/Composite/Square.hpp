#pragma once
#include "Graphic.hpp"
#include <iostream>

class Square : public Graphic {
public:
    void draw() const override {
        std::cout << "🟥 Drawing a Square\n";
    }

    std::string name() const override {
        return "Square";
    }
};