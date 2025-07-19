#pragma once

class SquarePeg {
    double width;
public:
    SquarePeg(double w): width(w) {}
    double getWidth() const {
        return width;
    }
};