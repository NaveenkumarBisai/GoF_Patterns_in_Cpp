#pragma once
#include "Subject.hpp"
#include "Observer.hpp"
#include <algorithm>
#include <vector>

class CameraSystem : public Subject {
private:
    std::vector<Observer*> observers;
    // Camera-specific data and methods
public:
    void attach(Observer* observer) override {
        observers.push_back(observer);
    }
    void detach(Observer* observer) override {
        observers.erase(std::remove(observers.begin(), observers.end(), observer), observers.end());
    }
    void notify() override {
        for (Observer* observer : observers) {
            observer->update(this);
        }
    }
    // Additional methods specific to CameraSystem
    void captureImage() {
        // Logic to capture an image
        notify(); // Notify observers after capturing an image
    }
};