#include "/repos/lab4cpp/lab4cpp/include/Violin.h"
#include <iostream>

Violin::Violin(const string& name, int year)
    : StringInstrument(name, year, 4, 8.0) {
}

void Violin::play() {
    incrementPlayCount(getType());
    cout << "Violin " << name << " sound like: Strum Strum..." << endl;
}

string Violin::getType() const { return "Violin"; }