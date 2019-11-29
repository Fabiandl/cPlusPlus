#include <vector>
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Professor.h"

using namespace std;

int main() {
    vector<Person*> diePersonen;
    diePersonen.push_back(new Student ("Risse", "Felicitas" , "635374"));
    diePersonen.push_back( new Professor("Philippsen", "Nele", "Datenbanken"));
    diePersonen.push_back( new Student ("Spillner", "Julian", "123429"));
    for(size_t i = 0; i < diePersonen.size(); ++i) {
        cout << diePersonen[i]->getVorname() << endl;
    }
    for(size_t i = 0; i < diePersonen.size(); ++i) {
        cout << diePersonen[i]->toString() << endl;
    }

    for(size_t i = 0; i < diePersonen.size(); i++) {
        Student *student = dynamic_cast<Student*>(diePersonen[i]);
        if(student) {
            cout << student->getMatrikelnummer() << endl;
        }
    }
}