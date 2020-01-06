#ifndef UEBUNG7_1_PROFESSOR_H
#define UEBUNG7_1_PROFESSOR_H
#include <string>
#include "Person.h"

class Professor : public Person {
public:
    virtual std::string toString();

    Professor(string vorname, string nachname, string matrikelnummer);

    const string& getLehrgebiet();
    void setLehrgebiet(string l);

private:
    string lehrgebiet;

};


#endif //UEBUNG7_1_PROFESSOR_H
