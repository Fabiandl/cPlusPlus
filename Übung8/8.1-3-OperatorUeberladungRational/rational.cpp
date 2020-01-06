// Klasse für rationale Zahlen
// (Definition der Methoden)
//////////////////////////////
#include"rational.h"
#include<iostream>
#include<cassert>

using namespace std;

// Elementfunktionen
void Rational::add(const Rational &r) {
    zaehler = zaehler * r.nenner + r.zaehler * nenner;
    nenner = nenner * r.nenner;
    kuerzen();
}

//void Rational::add(long a) {
//    zaehler *= a;
//}

void Rational::sub(const Rational &s) {
    Rational r = s;
    r.zaehler *= -1;
    add(r);
}

void Rational::mult(const Rational &r) {
    zaehler = zaehler * r.zaehler;
    nenner = nenner * r.nenner;
    kuerzen();
}

void Rational::div(const Rational &n) {
    Rational r = n;
    r.kehrwert();
    mult(r);
}

void Rational::set(long z, long n) {
    zaehler = z;
    nenner = n;
    assert(nenner != 0);
    kuerzen();
}

void Rational::eingabe() {
    cout << "Zähler :";
    cin >> zaehler;
    cout << "Nenner :";
    cin >> nenner;
    assert(nenner != 0);
    kuerzen();
}

void Rational::ausgabe() const {
    cout << zaehler << "/" << nenner << endl;
}

void Rational::kehrwert() {
    long temp = zaehler;
    zaehler = nenner;
    nenner = temp;
    assert(nenner != 0);
}

long ggt(long x, long y) {
    long rest;
    while (y > 0) {
        rest = x % y;
        x = y;
        y = rest;
    }
    return x;
}

void Rational::kuerzen() {
    int sign = 1;
    if (zaehler < 0) {
        sign = -sign;
        zaehler = -zaehler;
    }
    if (nenner < 0) {
        sign = -sign;
        nenner = -nenner;
    }
    long teiler = ggt(zaehler, nenner);
    zaehler = sign * zaehler / teiler;
    nenner = nenner / teiler;
}

bool Rational::operator==(const Rational &rational) {
    return (zaehler == rational.zaehler && nenner == rational.nenner);
}

bool Rational::operator!=(const Rational &rational) {
    return !(zaehler == rational.zaehler && nenner == rational.nenner);
}

std::ostream &Rational::operator<<(std::ostream &stream) {
    stream << zaehler << "/" << nenner << endl;
    return stream;
}

std::istream &Rational::operator>>(std::istream &stream) {
    stream >> zaehler;
    stream >> nenner;
    return stream;
}

void Rational::operator+=(const Rational &rational) {
    add(rational);
}

void Rational::operator-=(const Rational &rational) {
    sub(rational);
}

void Rational::operator*=(const Rational &rational) {
    mult(rational);
}

void Rational::operator/=(const Rational &rational) {
    div(rational);
}


const Rational operator+(const Rational &rational, const Rational &add) {
    Rational rat = Rational(rational);
    rat.add(add);
    return rat;
}

const Rational operator-(const Rational &rational, const Rational &add) {
    Rational rat = Rational(rational);
    rat.sub(add);
    return rat;
}

const Rational operator*(const Rational &rational, const Rational &add) {
    Rational rat = Rational(rational);
    rat.mult(add);
    return rat;
}

const Rational operator/(const Rational &rational, const Rational &add) {
    Rational rat = Rational(rational);
    rat.div(add);
    return rat;
}
