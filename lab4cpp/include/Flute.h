#ifndef FLUTE_H
#define FLUTE_H

#if defined(_WIN32) || defined(_WIN64)
#if defined(LAB4_BUILD_DLL)
#define LAB4_API __declspec(dllexport)
#else
#define LAB4_API __declspec(dllimport)
#endif
#else
#define LAB4_API
#endif

#include "WindInstrument.h"

class LAB4_API Flute : public WindInstrument {
public:
    Flute(const string& name, int year);
    void play() override;
    string getType() const override;
};
#endif