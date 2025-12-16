#ifndef GUITAR_H
#define GUITAR_H

#include "StringInstrument.h"

class Guitar : public StringInstrument {
public:
    Guitar(const string& name, int year);
    void play() override;
    string getType() const override;
    void tune() override;
};

#endif // GUITAR_H