#ifndef MUSICAL_INSTRUMENT_H
#define MUSICAL_INSTRUMENT_H

#if defined(_WIN32) || defined(_WIN64)
#if defined(LAB4_BUILD_DLL)
#define LAB4_API __declspec(dllexport)
#else
#define LAB4_API __declspec(dllimport)
#endif
#else
#define LAB4_API
#endif

#include <string>
#include <map>

using namespace std;

class LAB4_API MusicalInstrument {
protected:
    string name;
    int yearMade;
    static int totalInstruments;
    static map<string, int> playCountByType;

    void incrementPlayCount(const string& type) const;

public:
    MusicalInstrument(const string& name, int year);
    MusicalInstrument(const MusicalInstrument& other);
    virtual ~MusicalInstrument();

    MusicalInstrument& operator=(const MusicalInstrument& other);

    virtual void play() = 0;
    virtual void tune();
    virtual string getType() const = 0;

    static int getTotalInstruments();
    static string getMostPlayedType();

    string getName() const;
    int getYearMade() const;
};

#endif // MUSICAL_INSTRUMENT_H