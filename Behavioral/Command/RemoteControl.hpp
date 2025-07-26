#pragma once
#include "Command.hpp"

class RemoteControl {
    Command* command;
public:
    void setCommand(Command* cmd) {
        command = cmd;
    }

    void pressButton() {
        if (command) command->execute();
    }
};