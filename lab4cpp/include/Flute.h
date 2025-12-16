#ifndef FLUTE_H
#define FLUTE_H
#include "WindInstrument.h"

class Flute : public WindInstrument {
public:
    Flute(const string& name, int year);
    void play() override;
    string getType() const override;
};
#endif