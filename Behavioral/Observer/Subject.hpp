#pragma once
#include <vector>
#include <memory>

class Observer; // Forward declaration

class Subject {
public:
    virtual void attach(std::shared_ptr<Observer> observer) = 0;
    virtual void detach(std::shared_ptr<Observer> observer) = 0;
    virtual void notify(const std::string& message) = 0;
    virtual ~Subject() = default;
};