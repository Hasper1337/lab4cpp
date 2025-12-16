#ifndef VIOLIN_H
#define VIOLIN_H
#include "StringInstrument.h"

class Violin : public StringInstrument {
public:
    Violin(const string& name, int year);
    void play() override;
    string getType() const override;
};
#endif