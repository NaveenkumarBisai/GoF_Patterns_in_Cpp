#include "CameraSystem.hpp"
#include "Observer.hpp"
#include <memory>
#include <thread>
#include <chrono>

int main() {
    auto camera = std::make_shared<CameraSystem>();

    auto logger = std::make_shared<LoggerObserver>();
    auto display = std::make_shared<DisplayObserver>();

    camera->attach(logger);
    camera->attach(display);

    std::cout << ">>> Simulating 3 camera captures...\n";
    for (int i = 0; i < 3; ++i) {
        camera->captureImage();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    std::cout << "\n>>> Detaching logger...\n";
    camera->detach(logger);

    std::cout << ">>> Simulating 2 more captures...\n";
    for (int i = 0; i < 2; ++i) {
        camera->captureImage();
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }

    return 0;
}