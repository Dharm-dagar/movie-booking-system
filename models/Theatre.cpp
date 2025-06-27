#include "Theatre.h"

Theatre::Theatre(int id, const std::string& name, const std::string& location) {
    this->theatreId = id;
    this->name = name;
    this->location = location;
}

void Theatre::addScreen(const Screen& screen) {
    screens.push_back(screen);
}

std::vector<Screen>& Theatre::getScreens() {
    return screens;
}

std::string Theatre::getLocation() const {
    return location;
}
