#include "/repos/lab4cpp/lab4cpp/include/Guitar.h"
#include <iostream>

Guitar::Guitar(const string& name, int year)
    : StringInstrument(name, year, 6, 1.0) {
}

void Guitar::play() {
    incrementPlayCount(getType());
    cout << "Guitar " << name << " sound like: Strum Strum..." << endl;
}

string Guitar::getType() const { return "Guitar"; }

void Guitar::tune() {
    StringInstrument::tune();
    cout << "The guitar is tuned in E-A-D-G-B-E" << endl;
}