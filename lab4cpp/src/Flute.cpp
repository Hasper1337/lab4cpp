#include "/repos/lab4cpp/lab4cpp/include/Flute.h"
#include <iostream>

Flute::Flute(const string& name, int year)
    : WindInstrument(name, year, "Wood") {
}

void Flute::play() {
    incrementPlayCount(getType());
    cout << "Flute " << name << " sound like Toot Toot..." << endl;
}

string Flute::getType() const { return "Flute"; }