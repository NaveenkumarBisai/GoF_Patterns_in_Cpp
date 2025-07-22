#pragma once
#include <string>

class Graphic {
    public:
        virtual ~Graphic() = default;
        virtual void draw() const = 0;
        virtual std::string name() const = 0;
};