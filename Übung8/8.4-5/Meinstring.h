#ifndef MEINSTRING_H
#define MEINSTRING_H
// Einfache String-Klasse (mit Optimierungen)

#include <cstddef>    // size_t
#include <iostream>   // ostream

class MeinString {
public:
    MeinString();                     // Default-Konstruktor
    MeinString(const char *);         // allg. Konstruktor
    MeinString(const MeinString&);    // Kopierkonstruktor
    ~MeinString();                    // Destruktor
    MeinString& assign(const MeinString&); // Zuweisung eines MeinString
    MeinString& assign(const char *);      // Zuweisung eines char*
    const char& at(size_t position) const; // Zeichen holen
    char& at(size_t position);             // Zeichen holen, die Referenz erlaubt Ändern des Zeichens
    size_t length() const { return len;}   // Stringlänge zurückgeben
    size_t capacity() const { return cap;} // Kapazität zurückgeben
    void reserve(size_t bytes);            // Platz reservieren mit Erhalt des Inhalts
    void shrink_to_fit();                  // Platz minimieren
    const char* c_str() const { return start;}  // C-String zurückgeben
    MeinString& insert(int pos, const MeinString &insert);

    MeinString operator=(char* assign);
    std::ostream& operator<<(std::ostream& stream);
    void operator+=(const MeinString &concat);

private:
    size_t len;                         // Länge
    size_t cap;                         // Kapazität
    char *start;                        // Zeiger auf den Anfang
    void reserve_only(size_t bytes);    // Hilfsmethode: nur Platz reservieren
};

const MeinString operator+(const MeinString &front, const MeinString &concat);
void anzeigen(std::ostream& os, const MeinString& m);

#endif
