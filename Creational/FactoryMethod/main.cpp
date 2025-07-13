#include "LoggerFactory.hpp"

int main() {
    std::unique_ptr<LoggerFactory> factory;

    factory = std::make_unique<ConsoleLoggerFactory>();
    auto logger1 = factory->createLogger();
    logger1->log("Hello from Console Logger!");

    factory = std::make_unique<FileLoggerFactory>();
    auto logger2 = factory->createLogger();
    logger2->log("Hello from File Logger!");

    return 0;
}