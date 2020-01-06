#ifndef INTMENGE_H
#define INTMENGE_H
#include <vector>

using namespace std;
class IntMenge{
    public:
        IntMenge(); //allgemeiner Konstruktor
        IntMenge(const IntMenge &); //Copy-Konstruktur
    void hinzufuegen(int el);
    void entfernen(int el);
    bool istMitglied(int el);
    size_t size();
    void anzeigen();
    void loeschen();
    int getMax();
    int getMin();


private:
    vector<int> menge;
};

#endif