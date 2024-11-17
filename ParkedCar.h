#ifndef PARKEDCAR_H
#define PARKEDCAR_H

#include <string>
using namespace std;

class ParkedCar {
private:
    string make, model, color, licenseNumber;
    int minutesParked;

public:
    ParkedCar(string mk = "MAKE", string ml = "MODEL", string co = "COLOR", string ln = "LICENSE", int mn = 0)
        : make(mk), model(ml), color(co), licenseNumber(ln), minutesParked(mn) {}

    string getMake() const { return make; }
    string getModel() const { return model; }
    string getColor() const { return color; }
    string getLicenseNumber() const { return licenseNumber; }
    int getMinutesParked() const { return minutesParked; }
};

#endif