#include "Screen.h"

Screen::Screen(int id, int seatCount, SeatType defaultType) {
    this->screenId = id;
    this->totalSeats = seatCount;

    for (int i = 1; i <= seatCount; ++i) {
        seats.push_back(Seat(i, defaultType));
    }
}

int Screen::getScreenId() const {
    return screenId;
}

std::vector<Seat>& Screen::getSeats() {
    return seats;
}

Seat* Screen::getAvailableSeat() {
    for (auto& seat : seats) {
        if (seat.getAvailability()) {
            return &seat;
        }
    }
    return nullptr;
}
