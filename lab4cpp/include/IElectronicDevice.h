#ifndef I_ELECTRONIC_DEVICE_H
#define I_ELECTRONIC_DEVICE_H

#include <iostream>

class IElectronicDevice {
protected:
    bool powerOn;
    int currentPatch;

public:
    IElectronicDevice();
    void powerOnDevice();
    void setPatch(int patch);
    bool isPoweredOn() const;
};

#endif