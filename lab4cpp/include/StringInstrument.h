#ifndef STRING_INSTRUMENT_H
#define STRING_INSTRUMENT_H

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

class LAB4_API StringInstrument : public MusicalInstrument {
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