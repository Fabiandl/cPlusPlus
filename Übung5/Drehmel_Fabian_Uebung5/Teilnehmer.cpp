#include "Teilnehmer.h"
#include <algorithm>
#include <iostream>

std::string Teilnehmer::gibNamen() {
    return name;
}

void Teilnehmer::lerntKennen(Teilnehmer &person) {
    if (bekannte.empty()) {
        bekannte.push_back(person);
        person.lerntKennen(*this); //die andere Person bekommt diese hier auch
    } else {
        bool nochNichtInListe = true;
        for (size_t i = 0; i < bekannte.size(); i++) {
            if (person.compare(bekannte.at(i))) {
                nochNichtInListe = false;
            }
        }
        if (nochNichtInListe) {
            bekannte.push_back(person);
            person.lerntKennen(*this);
        }
    }
}

std::vector<Teilnehmer> Teilnehmer::druckeBekannte() {
    for (auto &i : bekannte) {
        std::cout << i.gibNamen() << ", ";
    }
//    for (size_t i = 0; i < bekannte.size(); i++) {
//        std::cout << bekannte.at(i).name;
//    }
    std::cout << std::endl;
}

