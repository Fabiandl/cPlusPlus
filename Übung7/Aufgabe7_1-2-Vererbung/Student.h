#ifndef UEBUNG7_1_STUDENT_H
#define UEBUNG7_1_STUDENT_H

#include <string>
#include "Person.h"

class Student : public Person {
public:
    virtual std::string toString();

    Student(string vorname, string nachname, string matrikelnummer);

    const string& getMatrikelnummer();
    void setMatrikelnummer(string m);

private:
    string matrikelnummer;

};

#endif //UEBUNG7_1_STUDENT_H
