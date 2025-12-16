#include "/repos/lab4cpp/lab4cpp/include/SynthGuitar.h"
#include <iostream>

SynthGuitar::SynthGuitar(const string& name, int year)
    : Guitar(name, year), IElectronicDevice() {
}

void SynthGuitar::play() {
    incrementPlayCount(getType());
    if (powerOn) {
        cout << "SynthGuitar " << name << " (patch #" << currentPatch << "): Electronic sound..." << endl;
    }
    else {
        cout << "The synth guitar is turned off!" << endl;
    }
}

string SynthGuitar::getType() const { return "SynthGuitar"; }

void SynthGuitar::tune() {
    if (powerOn) {
        Guitar::tune();
        cout << "Synth guitar calibration is complete." << endl;
    }
    else {
        cout << "Turn on the power to configure" << endl;
    }
}