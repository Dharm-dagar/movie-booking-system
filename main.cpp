#include <iostream>
#include "models/Movie.h"
#include "models/Screen.h"
#include "models/Show.h"
#include "models/Theatre.h"
#include "models/User.h"
#include "models/Booking.h"
#include "models/Seat.h"
#include "utils/Enums.h"
#include "utils/IdGenerator.h"

int main() {
    Movie movie1(IdGenerator::getNextId(), "Inception", 148);
    Screen screen1(IdGenerator::getNextId(), 5, SeatType::REGULAR);
    Theatre theatre1(IdGenerator::getNextId(), "PVR Cinema", "Delhi");
    theatre1.addScreen(screen1);
    Show show1(IdGenerator::getNextId(), &movie1, &screen1, "18:30");
    User user1(IdGenerator::getNextId(), "Dharm Singh", "dharm31503@gmail.com");

    std::cout << "Available Seats:\n";
    for (Seat& seat : screen1.getSeats()) {
        if (seat.getAvailability()) {
            std::cout << "Seat " << seat.getSeatNumber() << " is available.\n";
        }
    }

    Seat* availableSeat = screen1.getAvailableSeat();
    if (availableSeat == nullptr) {
        std::cout << "No available seats.\n";
        return 0;
    }

    Booking booking1(IdGenerator::getNextId(), &show1, availableSeat, &user1);
    booking1.confirmBooking();

    std::cout << "\nBooking Confirmed!\n";
    std::cout << "User: " << user1.getName() << "\n";
    std::cout << "Movie: " << movie1.getTitle() << "\n";
    std::cout << "Seat: " << availableSeat->getSeatNumber() << "\n";
    std::cout << "Show Time: " << show1.getStartTime() << "\n";

    std::cout << "\nCanceling Booking...\n";
    booking1.cancelBooking();

    if (booking1.getStatus() == BookingStatus::CANCELLED) {
        std::cout << "Booking cancelled successfully.\n";
    }

    return 0;
}
