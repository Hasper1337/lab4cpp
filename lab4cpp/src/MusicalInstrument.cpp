#include "/repos/lab4cpp/lab4cpp/include/MusicalInstrument.h"
#include <iostream>

int MusicalInstrument::totalInstruments = 0;
map<string, int> MusicalInstrument::playCountByType;

MusicalInstrument::MusicalInstrument(const string& name, int year)
    : name(name), yearMade(year) {
    totalInstruments++;
}

MusicalInstrument::MusicalInstrument(const MusicalInstrument& other)
    : name(other.name), yearMade(other.yearMade) {
    totalInstruments++;
}

MusicalInstrument::~MusicalInstrument() {
    totalInstruments--;
}

MusicalInstrument& MusicalInstrument::operator=(const MusicalInstrument& other) {
    if (this != &other) {
        name = other.name;
        yearMade = other.yearMade;
    }
    return *this;
}

void MusicalInstrument::tune() {
    cout << "Настройка инструмента:" << name << endl;
}

int MusicalInstrument::getTotalInstruments() {
    return totalInstruments;
}

string MusicalInstrument::getMostPlayedType() {
    if (playCountByType.empty()) return "No data";

    string maxType;
    int maxCount = 0;
    for (const auto& pair : playCountByType) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxType = pair.first;
        }
    }
    return maxType + " (" + to_string(maxCount) + " times)";
}

string MusicalInstrument::getName() const { return name; }
int MusicalInstrument::getYearMade() const { return yearMade; }

void MusicalInstrument::incrementPlayCount(const string& type) const {
    playCountByType[type]++;
}