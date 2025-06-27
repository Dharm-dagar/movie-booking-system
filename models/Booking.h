#pragma once
#include "Show.h"
#include "Seat.h"
#include "User.h"
#include "../utils/Enums.h"

class Booking {
private:
    int bookingId;
    Show* show;
    Seat* seat;
    User* user;
    BookingStatus status;

public:
    Booking(int id, Show* show, Seat* seat, User* user);
    void confirmBooking();
    void cancelBooking();
    BookingStatus getStatus() const;
    int getBookingId() const;
    Show* getShow() const;
    Seat* getSeat() const;
    User* getUser() const;
};
