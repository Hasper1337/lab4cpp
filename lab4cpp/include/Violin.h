#ifndef VIOLIN_H
#define VIOLIN_H
#include "StringInstrument.h"

#if defined(_WIN32) || defined(_WIN64)
#if defined(LAB4_BUILD_DLL)
#define LAB4_API __declspec(dllexport)
#else
#define LAB4_API __declspec(dllimport)
#endif
#else
#define LAB4_API
#endif

class LAB4_API Violin : public StringInstrument {
public:
    Violin(const string& name, int year);
    void play() override;
    string getType() const override;
};
#endif