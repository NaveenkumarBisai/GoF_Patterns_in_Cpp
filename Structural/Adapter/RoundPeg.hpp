#pragma once
#include "RoundHole.hpp"

class RoundPeg: public RoundHole
{
    double radius;
public:
    RoundPeg(double r): radius(r) {}
    double getRadius() const override{
        return radius;
    }
};