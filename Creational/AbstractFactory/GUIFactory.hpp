#ifndef GUIFACTORY_HPP
#define GUIFACTORY_HPP

#include <memory>
#include "Button.hpp"
#include "Checkbox.hpp"

// Abstract Factory Interface
class GUIFactory {
public:
    virtual std::unique_ptr<Button> createButton() = 0;
    virtual std::unique_ptr<Checkbox> createCheckbox() = 0;
    virtual ~GUIFactory() = default;
};

// Concrete Factory for Windows UI
class WinFactory : public GUIFactory {
public:
    std::unique_ptr<Button> createButton() override {
        return std::make_unique<WinButton>();
    }
    std::unique_ptr<Checkbox> createCheckbox() override {
        return std::make_unique<WinCheckbox>();
    }
};

// Concrete Factory for Mac UI
class MacFactory : public GUIFactory {
public:
    std::unique_ptr<Button> createButton() override {
        return std::make_unique<MacButton>();
    }
    std::unique_ptr<Checkbox> createCheckbox() override {
        return std::make_unique<MacCheckbox>();
    }
};

#endif // GUIFACTORY_HPP