#ifndef SYNTH_GUITAR_H
#define SYNTH_GUITAR_H

#include "Guitar.h"
#include "IElectronicDevice.h"

class SynthGuitar : public Guitar, public IElectronicDevice {
public:
    SynthGuitar(const string& name, int year);
    void play() override;
    string getType() const override;
    void tune() override;
};

#endif