#pragma once

#include "Subject.hpp"
class Observer {
public:
    virtual ~Observer() = default;
    virtual void update(Subject* subject) = 0;
};

class LoggerObserver : public Observer {
public:
    void update(Subject* subject) override {
        // Implementation for logging updates from the subject
    }
};

class DisplayObserver : public Observer {
public: 
    void update(Subject* subject) override {
        // Implementation for displaying updates from the subject
    }
};