#ifndef STRING_INSTRUMENT_H
#define STRING_INSTRUMENT_H

#include "MusicalInstrument.h"
#include <string>

class StringInstrument : public MusicalInstrument {
protected:
    int numberOfStrings;
    double tension;
    string* stringMaterials;

public:
    StringInstrument(const string& name, int year, int strings, double tension);
    StringInstrument(const StringInstrument& other);
    virtual ~StringInstrument();

    void tune() override;

    int getNumberOfStrings() const;
    double getTension() const;
    void setTension(double t);
};

#endif // STRING_INSTRUMENT_H