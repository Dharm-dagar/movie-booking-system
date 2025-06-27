#pragma once
#include <vector>
#include "Seat.h"

class Screen {
private:
    int screenId;
    int totalSeats;
    std::vector<Seat> seats;

public:
    Screen(int id, int seatCount, SeatType defaultType = SeatType::REGULAR);
    int getScreenId() const;
    std::vector<Seat>& getSeats();
    Seat* getAvailableSeat();
};
