#ifndef WIND_INSTRUMENT_H
#define WIND_INSTRUMENT_H

#include "MusicalInstrument.h"
#include <string>

class WindInstrument : public MusicalInstrument {
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