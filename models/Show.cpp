#include "Show.h"

Show::Show(int id, Movie* movie, Screen* screen, const std::string& startTime) {
    this->showId = id;
    this->movie = movie;
    this->screen = screen;
    this->startTime = startTime;
}

int Show::getShowId() const {
    return showId;
}

Movie* Show::getMovie() const {
    return movie;
}

Screen* Show::getScreen() const {
    return screen;
}

std::string Show::getStartTime() const {
    return startTime;
}
