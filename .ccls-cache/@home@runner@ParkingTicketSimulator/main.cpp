#include "ParkedCar.h" // Include the header file for ParkedCar
#include "ParkingMeter.h"
#include "ParkingTicket.h"
#include "PoliceOfficer.h"
#include <iostream>
using namespace std;

int main() {
    // Test cases    
    ParkedCar car1("Hyundai", "Sonata", "Silver", "A12345", 45);    
    ParkingMeter meter1(60);
    PoliceOfficer officer("Mark Smith", "B123456");

    if (officer.isViolation(car1, meter1)) {
        ParkingTicket ticket = officer.issueTicket(car1, meter1);
        ticket.printTicket();
    } else {
        cout << "No parking violation.\n";
    }

    // Additional test cases can be added here...

    return 0;
}