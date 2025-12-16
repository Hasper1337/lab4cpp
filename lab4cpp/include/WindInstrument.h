#ifndef WIND_INSTRUMENT_H
#define WIND_INSTRUMENT_H

#if defined(_WIN32) || defined(_WIN64)
#if defined(LAB4_BUILD_DLL)
#define LAB4_API __declspec(dllexport)
#else
#define LAB4_API __declspec(dllimport)
#endif
#else
#define LAB4_API
#endif

#include "MusicalInstrument.h"
#include <string>

class LAB4_API WindInstrument : public MusicalInstrument {
protected:
    string material;
    double airPressure;

public:
    WindInstrument(const string& name, int year, const string& material);
    void tune() override;

    void setAirPressure(double pressure);
    void setMaterial(const string& mat);
};

#endif // WIND_INSTRUMENT_H