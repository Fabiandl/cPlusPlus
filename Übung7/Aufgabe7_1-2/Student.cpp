//
// Created by I014600 on 26.11.2019.
//

#include "Student.h"

string Student::toString() {
    return "Student/in " + getVorname() + " " + getNachname() + ", Mat Nr.: " + matrikelnummer;
}


void Student::setMatrikelnummer(string m) {
    matrikelnummer = m;
}

Student::Student(string vorname, string nachname, string matrikelnummer) :
        Person(vorname, nachname), matrikelnummer(matrikelnummer) {}


const string& Student::getMatrikelnummer() { return matrikelnummer;}
