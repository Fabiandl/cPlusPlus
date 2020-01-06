#include "Meinstring.h"
#include <iostream>

using namespace std;

int main() {
    MeinString einString("Hallo");
    anzeigen(cout, einString);
    cout << endl;

    // Zuweisen
    MeinString zweiterString;
    zweiterString.reserve(20);
    zweiterString.assign(einString); // dank reserve() kein new erforderlich
    cout << "zugewiesener String: ";
    anzeigen(cout, zweiterString);
    cout << endl;

    cout << "zweiterString.length() : " << zweiterString.length() << endl;
    cout << "zweiterString.capacity() : " << zweiterString.capacity() << endl;
    cout << "nach shrink_to_fit(): " << endl;
    zweiterString.shrink_to_fit();
    cout << "zweiterString.length() : " << zweiterString.length() << endl;
    cout << "zweiterString.capacity() : " << zweiterString.capacity() << endl;

    einString.insert(5, " MASE");
    einString.insert(8, "T");
    anzeigen(cout, einString);
    cout << endl;
    einString += ", wie geht es dir?";
    anzeigen(cout, einString);
    cout << endl;

    einString.insert(0, "Ein schoenes ");
    anzeigen(cout, einString);
    cout << endl;

    MeinString tmp = einString + " &*&";
    tmp << cout;
}