#include "Seat.h"

Seat::Seat(int number, SeatType seatType) {
    seatNumber = number;
    type = seatType;
    isAvailable = true;
}

bool Seat::getAvailability() {
    return isAvailable;
}

void Seat::bookSeat() {
    if (isAvailable)
        isAvailable = false;
}

void Seat::cancelSeat() {
    isAvailable = true;
}

int Seat::getSeatNumber() {
    return seatNumber;
}

SeatType Seat::getSeatType() {
    return type;
}
