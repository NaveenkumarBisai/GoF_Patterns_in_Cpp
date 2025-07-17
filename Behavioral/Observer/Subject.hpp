#pragma once

class Subject {
public:
    virtual ~Subject() = default;
    virtual void attach(class Observer* observer) = 0;
    virtual void detach(class Observer* observer) = 0;
    virtual void notify() = 0;
};