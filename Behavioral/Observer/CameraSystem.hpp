#pragma once
#include "Subject.hpp"
#include "Observer.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

class CameraSystem : public Subject {
private:
    std::vector<std::shared_ptr<Observer>> observers;

public:
    void attach(std::shared_ptr<Observer> observer) override {
        observers.push_back(observer);
    }

    void detach(std::shared_ptr<Observer> observer) override {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }

    void notify(const std::string& message) override {
        for (const auto& observer : observers) {
            if (observer)
                observer->update(message);
        }
    }

    // Simulate camera event
    void captureImage() {
        std::string image = "Frame_" + std::to_string(rand() % 100);
        std::cout << "[Camera] Captured " << image << std::endl;
        notify(image);
    }
};