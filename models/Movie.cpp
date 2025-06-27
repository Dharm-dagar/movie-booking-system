#include "Movie.h"

Movie::Movie(int id, std::string title, int duration) {
    this->id = id;
    this->title = title;
    this->duration = duration;
}

std::string Movie::getTitle() {
    return title;
}

int Movie::getDuration() {
    return duration;
}

int Movie::getId() {
    return id;
}
