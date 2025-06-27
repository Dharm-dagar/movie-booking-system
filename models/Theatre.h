#pragma once
#include <string>
#include <vector>
#include "Screen.h"

class Theatre {
private:
    int theatreId;
    std::string name;
    std::string location;
    std::vector<Screen> screens;

public:
    Theatre(int id, const std::string& name, const std::string& location);
    void addScreen(const Screen& screen);
    std::vector<Screen>& getScreens();
    std::string getLocation() const;
};
