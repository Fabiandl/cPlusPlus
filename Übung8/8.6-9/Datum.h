#ifndef INC_8_6_9_DATUM_H
#define INC_8_6_9_DATUM_H

// NOCH NICHT VOLLSTÄNDIG (s. Übungsaufgaben)
#include "UngueltigesDatumException.h"
#include<string>
#include <iostream>

class Datum {
public:
    Datum();                         // Default-Konstruktor
    Datum(int t, int m, int j = 1997); // allgemeiner Konstruktor
    void set(int t, int m, int j) throw(UngueltigesDatumException); // Datum setzen
    void aktuell();                  // Systemdatum setzen
    bool istSchaltjahr() const;
    Datum& operator++();             // Tag hochzählen, präfix
    Datum operator++(int);           // Tag hochzählen, postfix
    int tag()   const;
    int monat() const;
    int jahr()  const;

    // besser: durch Methode string toString() ersetzen!
    // (siehe Übungsaufgabe)
    operator std::string() const;         // Typumwandlungsoperator
    std::ostream& operator<<(std::ostream& stream);
    bool operator==(const Datum& datum);
    bool operator!=(const Datum& datum);
    bool operator<(const Datum& datum);


private:
    int tag_, monat_, jahr_;
};

bool istSchaltjahr(int jahr); // Impl. s.u.
int DatumDifferenz(const Datum& a, const Datum& b);

// inline-Methoden
inline Datum::Datum(int t, int m, int j) { set(t, m, j);}

inline int Datum::tag()   const { return tag_;  }
inline int Datum::monat() const { return monat_;}
inline int Datum::jahr()  const { return jahr_; }
inline bool Datum::istSchaltjahr() const {
    return ::istSchaltjahr(jahr_);
}

// global
bool istGueltigesDatum(int t, int m, int j);

inline bool istSchaltjahr(int jahr)  {
    return  (jahr % 4 == 0 && jahr % 100) || jahr % 400 == 0;
}



#endif //INC_8_6_9_DATUM_H
