#ifndef BUTTON_HPP
#define BUTTON_HPP

#include <iostream>
#include <string>

class Button {
public:
    virtual void paint() = 0;
    virtual ~Button() = default;
};

class WinButton : public Button {
public:
    void paint() override {
        std::cout << "🪟 Rendering a Windows-style button.\n";
    }
};

class MacButton : public Button {
public:
    void paint() override {
        std::cout << "🍎 Rendering a Mac-style button.\n";
    }
};

#endif // BUTTON_HPP
