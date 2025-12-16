#ifndef GUITAR_H
#define GUITAR_H

#if defined(_WIN32) || defined(_WIN64)
#if defined(LAB4_BUILD_DLL)
#define LAB4_API __declspec(dllexport)
#else
#define LAB4_API __declspec(dllimport)
#endif
#else
#define LAB4_API
#endif

#include "StringInstrument.h"

class LAB4_API Guitar : public StringInstrument {
public:
    Guitar(const string& name, int year);
    void play() override;
    string getType() const override;
    void tune() override;
};

#endif // GUITAR_H