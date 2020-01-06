#include "Professor.h"

std::string Professor::toString() {
    return "Prof. " + getVorname() + " " + getNachname() + ", Lehrgebiet: " + getLehrgebiet();
}

void Professor::setLehrgebiet(string l) {
    lehrgebiet = l;
}
Professor::Professor(string vorname, string nachname, string matrikelnummer):Person(vorname, nachname) {}

const string& Professor::getLehrgebiet() { return lehrgebiet;}
