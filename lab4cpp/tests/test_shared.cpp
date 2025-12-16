#include <iostream>
#include <vector>
#include <string>

class MusicalInstrument;
class Guitar;
class Violin;
class Flute;
class SynthGuitar;

#include "../include/Guitar.h"
#include "../include/Violin.h"
#include "../include/Flute.h"
#include "../include/SynthGuitar.h"

int main() {
    std::cout << "=== Testing with SHARED library ===\n";

    std::vector<MusicalInstrument*> instruments;

    instruments.push_back(new Guitar("Fender Stratocaster", 2020));
    instruments.push_back(new Violin("Amati", 1650));
    instruments.push_back(new Flute("Pearl", 2015));

    SynthGuitar* sg = new SynthGuitar("Yamaha SG", 2023);
    sg->powerOnDevice();
    sg->setPatch(7);
    instruments.push_back(sg);

    for (auto* instr : instruments) {
        instr->tune();
        instr->play();
        std::cout << "Type: " << instr->getType()
            << ", Name: " << instr->getName()
            << ", Year: " << instr->getYearMade() << "\n\n";
    }

    std::cout << "--- Statistics ---\n";
    std::cout << "Total instruments created: " << MusicalInstrument::getTotalInstruments() << "\n";
    std::cout << "Most played type: " << MusicalInstrument::getMostPlayedType() << "\n";

    for (auto* instr : instruments) {
        delete instr;
    }

    return 0;
}