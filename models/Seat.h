#pragma once
#include "../utils/Enums.h"

class Seat
{
private:
    int seatNumber;
    SeatType type;
    bool isAvailable;

public:
    Seat(int number, SeatType seatType);
    bool getAvailability();
    void bookSeat();
    void cancelSeat();
    int getSeatNumber();
    SeatType getSeatType();
};
