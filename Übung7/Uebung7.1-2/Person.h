#ifndef UEBUNG7_1_PERSON_H
#define UEBUNG7_1_PERSON_H

#include <string>
using namespace std;

class Person {
public:
    Person(string vorname, string nachname);

    const string& getNachname();
    const string& getVorname();

    void setNachname(string);
    void setVorname(string);

    virtual string toString() = 0;

private:
    string vorname;
    string nachname;
};



#endif //UEBUNG7_1_PERSON_H
