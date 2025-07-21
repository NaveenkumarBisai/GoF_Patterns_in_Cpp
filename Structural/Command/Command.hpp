#pragma once

class Command {
public:
    virtual ~Command() = default;

    // Execute the command
    virtual void execute() = 0;
};