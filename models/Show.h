#pragma once
#include "Movie.h"
#include "Screen.h"
#include <string>

class Show {
private:
    int showId;
    Movie* movie;
    Screen* screen;
    std::string startTime;

public:
    Show(int id, Movie* movie, Screen* screen, const std::string& startTime);
    int getShowId() const;
    Movie* getMovie() const;
    Screen* getScreen() const;
    std::string getStartTime() const;
};
