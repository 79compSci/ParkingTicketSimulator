#ifndef POLICEOFFICER_H
#define POLICEOFFICER_H

#include "ParkingTicket.h"
#include "ParkedCar.h"
#include "ParkingMeter.h"
#include <string>
using namespace std;

class PoliceOfficer {
private:
    string name, badgeNumber;

public:
    PoliceOfficer(string n = "Officer Name", string bn = "Badge Number")
        : name(n), badgeNumber(bn) {}

    string getName() const { return name; }
    string getBadgeNumber() const { return badgeNumber; }

    bool isViolation(ParkedCar car, ParkingMeter meter) const {
        return car.getMinutesParked() > meter.getMinutesPurchased();
    }

    ParkingTicket issueTicket(ParkedCar car, ParkingMeter meter) const {
        return ParkingTicket(car, meter, *this);
    }
};

#endif