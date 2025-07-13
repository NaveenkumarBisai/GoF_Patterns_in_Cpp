#ifndef LOGGER_FACTORY_HPP
#define LOGGER_FACTORY_HPP

#include "Logger.hpp"
#include <memory>
#include <string>

class LoggerFactory {
public:
    virtual std::unique_ptr<Logger> createLogger() = 0;
    virtual ~LoggerFactory() = default;
};

class ConsoleLoggerFactory : public LoggerFactory {
public:
    std::unique_ptr<Logger> createLogger() override {
        return std::make_unique<ConsoleLogger>();
    }
};

class FileLoggerFactory : public LoggerFactory {
public:
    std::unique_ptr<Logger> createLogger() override {
        return std::make_unique<FileLogger>();
    }
};

#endif // LOGGER_FACTORY_HPP