#include "/repos/lab4cpp/lab4cpp/include/StringInstrument.h"
#include <iostream>

StringInstrument::StringInstrument(const string& name, int year, int strings, double tension)
    : MusicalInstrument(name, year), numberOfStrings(strings), tension(tension) {
    stringMaterials = new string[numberOfStrings];
    for (int i = 0; i < numberOfStrings; ++i) {
        stringMaterials[i] = "Steel";
    }
}

StringInstrument::StringInstrument(const StringInstrument& other)
    : MusicalInstrument(other), numberOfStrings(other.numberOfStrings), tension(other.tension) {
    stringMaterials = new string[numberOfStrings];
    for (int i = 0; i < numberOfStrings; ++i) {
        stringMaterials[i] = other.stringMaterials[i];
    }
}

StringInstrument::~StringInstrument() {
    delete[] stringMaterials;
}

void StringInstrument::tune() {
    MusicalInstrument::tune();
    cout << "Натяжение струн: " << tension << endl;
}

int StringInstrument::getNumberOfStrings() const { return numberOfStrings; }
double StringInstrument::getTension() const { return tension; }
void StringInstrument::setTension(double t) { tension = t; }