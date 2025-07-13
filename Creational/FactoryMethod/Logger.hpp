#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <iostream>

class Logger {
public:
    virtual void log(const std::string& message) = 0;
    virtual ~Logger() = default;
};

class ConsoleLogger : public Logger {
public:
    void log(const std::string& message) override {
        std::cout << "[Console] " << message << "\n";
    }
};

class FileLogger : public Logger {
public:
    void log(const std::string& message) override {
        // In real use-case: write to file
        std::cout << "[File] " << message << " (pretend this is a file)\n";
    }
};

#endif // LOGGER_HPP