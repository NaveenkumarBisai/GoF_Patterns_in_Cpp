#include <iostream>
#include "Light.hpp"
#include "TurnOnCommand.hpp"
#include "TurnOffCommand.hpp"
#include "RemoteControl.hpp"

int main() {
    Light livingRoomLight;

    TurnOnCommand turnOn(livingRoomLight);
    TurnOffCommand turnOff(livingRoomLight);

    RemoteControl remote;

    // Turn on the light
    remote.setCommand(&turnOn);
    remote.pressButton();

    // Turn off the light
    remote.setCommand(&turnOff);
    remote.pressButton();

    return 0;
}