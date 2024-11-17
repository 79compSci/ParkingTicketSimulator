#ifndef PARKINGTICKET_H
#define PARKINGTICKET_H

#include "ParkedCar.h"
#include "ParkingMeter.h"
#include "PoliceOfficer.h"
#include <iostream>

class ParkingTicket {
private:
    ParkedCar car;
    ParkingMeter meter;
    PoliceOfficer officer;
    int fine;

    void calculateFine() {
        int overMinutes = car.getMinutesParked() - meter.getMinutesPurchased();
        if (overMinutes <= 0) {
            fine = 0;
            return;
        }
        fine = 25;
        overMinutes -= 60;
        while (overMinutes > 0) {
            fine += 10;
            overMinutes -= 60;
        }
    }

public:
    ParkingTicket(ParkedCar c, ParkingMeter m, PoliceOfficer o)
        : car(c), meter(m), officer(o) {
        calculateFine();
    }

    void printTicket() const {
        if (fine == 0) {
            cout << "No parking violation.\n";
            return;
        }
        cout << "*** Parking Ticket ***\n";
        cout << "Officer " << officer.getName() << " Badge Number " << officer.getBadgeNumber() << endl;
        cout << "Vehicle License Number: " << car.getLicenseNumber() << endl;
        cout << "Make: " << car.getMake() << " Model: " << car.getModel() << " Color: " << car.getColor() << endl;
        cout << "Meter Minutes: " << meter.getMinutesPurchased() << " Minutes Parked: " << car.getMinutesParked() << endl;
        cout << "Parking Fee: $" << fine << endl;
    }
};

#endif