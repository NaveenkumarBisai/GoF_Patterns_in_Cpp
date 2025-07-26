#pragma once
#include "Command.hpp"
#include "Light.hpp"

class TurnOnCommand : public Command {
    Light& light;
public:
    TurnOnCommand(Light& l) : light(l) {}
    void execute() override {
        light.turnOn();
    }
};