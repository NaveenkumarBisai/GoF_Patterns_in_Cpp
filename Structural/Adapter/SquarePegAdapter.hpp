#pragma once
#include "SquarePeg.hpp"
#include "RoundHole.hpp"

class SquarePegAdapter : public RoundHole {
    SquarePeg squarePeg;
public:
    SquarePegAdapter(const SquarePeg& peg) : squarePeg(peg) {}
    double getRadius() const override {
        // Convert square peg width to radius
        return squarePeg.getWidth() * std::sqrt(2) / 2;
    }
};