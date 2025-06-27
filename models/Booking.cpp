#include "Booking.h"

Booking::Booking(int id, Show* show, Seat* seat, User* user) {
    this->bookingId = id;
    this->show = show;
    this->seat = seat;
    this->user = user;
    this->status = BookingStatus::PENDING;
}

void Booking::confirmBooking() {
    if (seat->getAvailability()) {
        seat->bookSeat();
        status = BookingStatus::CONFIRMED;
    }
}

void Booking::cancelBooking() {
    seat->cancelSeat();
    status = BookingStatus::CANCELLED;
}

BookingStatus Booking::getStatus() const {
    return status;
}

int Booking::getBookingId() const {
    return bookingId;
}

Show* Booking::getShow() const {
    return show;
}

Seat* Booking::getSeat() const {
    return seat;
}

User* Booking::getUser() const {
    return user;
}
