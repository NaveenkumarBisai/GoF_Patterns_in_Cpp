#ifndef CHECKBOX_HPP
#define CHECKBOX_HPP

#include <iostream>
#include <string>

class Checkbox {
public:
    virtual void paint() = 0;
    virtual ~Checkbox() = default;
};

class WinCheckbox : public Checkbox {
public:
    void paint() override {
        std::cout << "🪟 Rendering a Windows-style checkbox.\n";
    }
};

class MacCheckbox : public Checkbox {
public:
    void paint() override {
        std::cout << "🍎 Rendering a Mac-style checkbox.\n";
    }
};

#endif // CHECKBOX_HPP
