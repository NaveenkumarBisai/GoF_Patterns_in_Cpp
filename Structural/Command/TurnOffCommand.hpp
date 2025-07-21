#pragma once
#include "Command.hpp"
#include "Light.hpp"

class TurnOffCommand : public Command {
    Light& light;
public:
    TurnOffCommand(Light& l) : light(l) {}
    void execute() override {
        light.turnOff();
    }
};