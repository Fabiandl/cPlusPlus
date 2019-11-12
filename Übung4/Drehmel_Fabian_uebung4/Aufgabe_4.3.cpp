/*
#include "MeineKlasse.h"
#include <iostream>
using namespace std;

int main() {
    MeineKlasse objekt;
    objekt.readonlyAttribut = 999; // Fehler! nicht erlaubte Aktion
    objekt.aendern(999);              // OK, Setter funktioniert!
    // erlaubter direkter lesender Zugriff:
    cout << "objekt.readonlyAttribut="
    << objekt.readonlyAttribut << endl;    // ok

    return 0;
}
 */