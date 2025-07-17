#include "CameraSystem.hpp"
#include "Observer.hpp"

int main() {
    CameraSystem cameraSystem;

    LoggerObserver logger;
    DisplayObserver display;

    cameraSystem.attach(&logger);
    cameraSystem.attach(&display);

    // Simulate capturing an image
    cameraSystem.captureImage();

    // Detach observers if needed
    cameraSystem.detach(&logger);
    cameraSystem.detach(&display);

    return 0;
}