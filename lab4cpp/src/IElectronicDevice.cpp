#include "/repos/lab4cpp/lab4cpp/include/IElectronicDevice.h"
#include <iostream>

using namespace std;

IElectronicDevice::IElectronicDevice() : powerOn(false), currentPatch(0) {}

void IElectronicDevice::powerOnDevice() {
    powerOn = true;
    cout << "Device is turned on" << endl;
}

void IElectronicDevice::setPatch(int patch) {
    currentPatch = patch;
    cout << "Patch #" << patch << " set" << endl;
}

bool IElectronicDevice::isPoweredOn() const { return powerOn; }