#include"Meinstring.h"
#include<cassert>
#include<cstring>
#include <vector>

// Der Default-Konstruktor erzeugt einen leeren String der Länge 0,
//der nur aus dem Nullbyte besteht
MeinString::MeinString()
        : len(0), cap(0), start(new char[1]) {  // Platz für '\0'
    *start = '\0';                         // leerer String
}

// Der allgemeine Konstruktor erzeugt aus einem klassischen C-String ein
// MeinString-Objekt.

MeinString::MeinString(const char *s)      // allg. Konstruktor
        : len(strlen(s)), cap(len), start(new char[cap + 1]) {
    strcpy(start, s);
}

// Der Kopierkonstruktor arbeitet ähnlich, nur dass er die Länge des
// Objekts, mit dem initialisiert wird, direkt übernehmen kann:
MeinString::MeinString(const MeinString &m)     // Kopierkonstruktor
        : len(m.len), cap(len), start(new char[cap + 1]) {
    strcpy(start, m.start);
}

MeinString::~MeinString() {                // Destruktor
    delete[] start;
}

void MeinString::reserve(size_t groesse) {
    if (groesse > cap) {
        char *temp = new char[groesse + 1]; // neuen Platz beschaffen
        strcpy(temp, start);              // umkopieren
        delete[] start;                  // alten Platz freigeben
        start = temp;                     // Verwaltungsinformation aktualisieren
        cap = groesse;                    // Verwaltungsinformation aktualisieren
    }
}

void MeinString::reserve_only(size_t groesse) {
    if (groesse > cap) {
        char *temp = new char[groesse + 1]; // neuen Platz beschaffen
        delete[] start;                  // alten Platz freigeben
        start = temp;                     // Verwaltungsinformation aktualisieren
        cap = groesse;                    // Verwaltungsinformation aktualisieren
    }
}

void MeinString::shrink_to_fit() {
    if (cap > len) {
        char *temp = new char[len + 1];   // neuen Platz beschaffen
        strcpy(temp, start);            // umkopieren
        delete[] start;                // alten Platz freigeben
        start = temp;                   // Verwaltungsinformation aktualisieren
        cap = len;                      // Verwaltungsinformation aktualisieren
    }
}

MeinString &MeinString::assign(const MeinString &m) { // Zuweisung eines MeinString
    reserve_only(m.len);
    strcpy(start, m.start);
    len = m.len;
    return *this;
}

MeinString &MeinString::assign(const char *s) {  // Zuweisung eines char*
    size_t temp = strlen(s);
    reserve_only(temp);
    strcpy(start, s);
    len = temp;
    return *this;
}

char &MeinString::at(size_t position) {  // Zeichen per Referenz holen
    assert(position < len);               // Nullbyte lesen ist nicht erlaubt
    return start[position];
}

const char &MeinString::at(size_t position) const { // Zeichen holen
    assert(position < len);                           // Nullbyte lesen ist nicht erlaubt
    return start[position];
}

//New Stuff
MeinString &MeinString::insert(int pos, const MeinString &insert) {
    reserve(len + insert.length());
    char *iterator = start;

    // Bis zur Stelle gehen, an welcher Einfügt werdden soll
    for (size_t i = 0; i < pos; ++i) {
        iterator++;
    }
    std::vector<char> tmp;
    char *mover = iterator;

    // Alles was nach der Stelle an welcher eingefügt wird, in "tmp" kopieren
    for (size_t i = pos; i < len; i++) {
        tmp.push_back(*mover++);
    }

    //Der einzufügende String in den eigentlichen String rein schreiben
    for (size_t i = 0; i < insert.length(); i++) {
        *iterator = insert.at(i);
        iterator++;
    }

    //Alles Dahinter wieder dran hängem
    for (char i : tmp) {
        *iterator = i;
        iterator++;
    }

    //Ende makieren
    *iterator = '\00';
    len += insert.length();
    return *this;
}

void anzeigen(std::ostream &os, const MeinString &m) {
    os << m.c_str();
}