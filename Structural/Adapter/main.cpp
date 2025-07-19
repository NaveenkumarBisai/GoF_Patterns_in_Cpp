#include <iostream>
#include "RoundPeg.hpp"
#include "SquarePegAdapter.hpp"

int main() {
    RoundPeg roundPeg(5.0);
    std::cout << "RoundPeg radius: " << roundPeg.getRadius() << "\n";

    SquarePeg squarePeg(8.0);
    SquarePegAdapter adapter(squarePeg);

    std::cout << "SquarePeg fits as radius: " << adapter.getRadius() << "\n";

    if (adapter.getRadius() <= roundPeg.getRadius()) {
        std::cout << "SquarePeg fits in the RoundHole!\n";
    } else {
        std::cout << "SquarePeg is too big!\n";
    }

    return 0;
}