#ifndef SYNTH_GUITAR_H
#define SYNTH_GUITAR_H

#if defined(_WIN32) || defined(_WIN64)
#if defined(LAB4_BUILD_DLL)
#define LAB4_API __declspec(dllexport)
#else
#define LAB4_API __declspec(dllimport)
#endif
#else
#define LAB4_API
#endif

#include "Guitar.h"
#include "IElectronicDevice.h"

class LAB4_API SynthGuitar : public Guitar, public IElectronicDevice {
public:
    SynthGuitar(const string& name, int year);
    void play() override;
    string getType() const override;
    void tune() override;
};

#endif