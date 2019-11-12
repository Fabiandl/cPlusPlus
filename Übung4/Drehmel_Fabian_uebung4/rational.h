// Klasse für rationale Zahlen
//////////////////////////////
 
#ifndef RATIONAL_H
#define RATIONAL_H
 
class Rational {
   public:
     Rational();
     Rational(long z, long n);   // allgemeiner Konstruktor
     Rational(long);             // Typumwandlungskonstruktor
     //Die Änderung mit dem Typumwandlungskonstruktors reicht aus, da die Methoden bereits einen
     //generischen datentyp verarbeiten koennen. Und durch den inline Konstruktor auch eine Instanz
     //instanziert werden kann.
 
     // Abfragen
     long getZaehler() const;
     long getNenner()  const;
 
     // arithmetische Methoden
     // (werden später durch überladene Operatoren ergänzt)
     void add(const Rational& r);
     void sub(const Rational& r);
     void mult(const Rational& r);
     void div(const Rational& r);
 
     // weitere Methoden
     void set(long zaehler, long nenner);
     void eingabe();
     void ausgabe() const;
     void kehrwert();
     void kuerzen();
 
   private:
     long zaehler, nenner;
};
 
// inline Methoden
inline Rational::Rational()               : zaehler(0), nenner(1) {}
inline Rational::Rational(long z, long n) : zaehler(z), nenner(n) {}
inline Rational::Rational(long ganzeZahl) : zaehler(ganzeZahl), nenner(1) {}
 
inline long Rational::getZaehler() const {return zaehler;}
inline long Rational::getNenner()  const {return nenner;}
 
#endif