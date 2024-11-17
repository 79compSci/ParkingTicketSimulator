#ifndef PARKINGMETER_H
#define PARKINGMETER_H

class ParkingMeter {
private:
    int minutesPurchased;

public:
    ParkingMeter(int mp = 0) : minutesPurchased(mp) {}
    int getMinutesPurchased() const { return minutesPurchased; }
};

#endif