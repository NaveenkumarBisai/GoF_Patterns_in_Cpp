#include "GUIFactory.hpp"
#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<GUIFactory> factory;

    // Simulate user preference for Windows UI
    bool useWindowsUI = true;

    if (useWindowsUI) {
        factory = std::make_unique<WinFactory>();
    } else {
        factory = std::make_unique<MacFactory>();
    }

    // Create UI components using the factory
    auto button = factory->createButton();
    auto checkbox = factory->createCheckbox();

    // Render the components
    button->paint();
    checkbox->paint();

    return 0;
}