#ifndef I_ELECTRONIC_DEVICE_H
#define I_ELECTRONIC_DEVICE_H

#if defined(_WIN32) || defined(_WIN64)
#if defined(LAB4_BUILD_DLL)
#define LAB4_API __declspec(dllexport)
#else
#define LAB4_API __declspec(dllimport)
#endif
#else
#define LAB4_API
#endif

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