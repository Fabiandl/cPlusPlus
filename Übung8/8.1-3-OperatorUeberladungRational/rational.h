// Klasse für rationale Zahlen
//////////////////////////////

#ifndef RATIONAL_H
#define RATIONAL_H

#include <iostream>

class Rational {
public:
    Rational();

    Rational(long z, long n);   // allgemeiner Konstruktor
    Rational(long z);

    // Abfragen
    long getZaehler() const;

    long getNenner() const;

    // arithmetische Methoden
    // (werden später durch überladene Operatoren ergänzt)
    void add(const Rational &r);

    void sub(const Rational &r);

    void mult(const Rational &r);

    void div(const Rational &r);

    // weitere Methoden
    void set(long zaehler, long nenner);

    void eingabe();

    void ausgabe() const;

    void kehrwert();

    void kuerzen();

    bool operator== (const Rational& rational);

    bool operator!= (const Rational& rational);

    std::ostream& operator<< (std::ostream & stream);

    std::istream& operator>> (std::istream & stream);

    //Void wirkt auf mich sinnvoll, da man ja auf dem Objekt arbeitet und man nicht zurueck bekommen muss.
    //Zudem hat die "add" - Methode auch void als Rueckgabe
    void operator+= (const Rational& rational);

    void operator-= (const Rational& rational);

    void operator*= (const Rational& rational);

    void operator/= (const Rational& rational);


private:
    long zaehler, nenner;
};
const Rational operator+(const Rational& rational, const Rational& add);
const Rational operator-(const Rational& rational, const Rational& add);
const Rational operator*(const Rational& rational, const Rational& add);
const Rational operator/(const Rational& rational, const Rational& add);

//const Rational operator-(const Rational& rational, const Rational& sub) {
////    rational -= sub;
//    return rational;
//}

// inline Methoden
inline Rational::Rational() : zaehler(0), nenner(1) {}

inline Rational::Rational(long z, long n) : zaehler(z), nenner(n) {}

//Typeumwandlungskonstruktor
//(Es wird automatisch konvertiert mit der Implizieten Typumwandlung, besser waere aber eine Expliziete Typenumwandlung
inline Rational::Rational(const long z) : zaehler(z), nenner(1L) {}

inline long Rational::getZaehler() const { return zaehler; }

inline long Rational::getNenner() const { return nenner; }

#endif
