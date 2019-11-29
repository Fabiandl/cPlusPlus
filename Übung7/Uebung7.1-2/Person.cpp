#include "Person.h"

void Person::setNachname(string n) {
    nachname = n;
}

void Person::setVorname(string v) {
    vorname = v;
}

Person::Person(string vorname, string nachname) : vorname(vorname), nachname(nachname) {}

const string& Person::getNachname() { return nachname; }
const string& Person::getVorname() { return vorname; }
