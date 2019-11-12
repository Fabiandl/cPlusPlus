#ifndef TASCHENRECHNER_H
#define TASCHENRECHNER_H

#include <string>
using namespace std;

class Taschenrechner{
    public:
    Taschenrechner(string rechnung);
    char peekZeichen(string rechnung);
    char leseZeichen(string rechnung);
    int leseZahl(string rechnung);
    double leseFaktor(string rechnung);
    double leseSummand(string rechnung);
    double leseAusdruck(string rechnung);
    string getAnfrage();
    double getErgebnis();
    int counter = 0;
    string rec;
    
};
#endif