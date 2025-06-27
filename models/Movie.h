#pragma once
#include <string>

class Movie {
private:
    int id;
    std::string title;
    int duration; 

public:
    Movie(int id, std::string title, int duration);
    std::string getTitle();
    int getDuration();
    int getId();
};
