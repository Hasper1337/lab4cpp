#include "/repos/lab4cpp/lab4cpp/include/WindInstrument.h"
#include <iostream>

WindInstrument::WindInstrument(const string& name, int year, const string& material)
    : MusicalInstrument(name, year), material(material), airPressure(1.0) {
}

void WindInstrument::tune() {
    MusicalInstrument::tune();
    cout << "Давление воздуха: " << airPressure << endl;
}

void WindInstrument::setAirPressure(double pressure) { airPressure = pressure; }
void WindInstrument::setMaterial(const string& mat) { material = mat; }