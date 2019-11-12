#include <iostream>
#include "Taschenrechner.h"
using namespace std;

int main() {
    while(true) {
        // Abbruch mit break
        cout << "Bitte einen mathematischen Ausdruck eingeben , z.B. 4*(12+3)"
               << "\n(Abbruch durch Eingabe einer Leerzeile) : " ;
        string anfrage;
        getline(cin, anfrage);
        if(anfrage.length() > 0) {
            Taschenrechner tr(anfrage);
            cout << "Das Ergebnis der Anfrage '"
                   << tr.getAnfrage() << " ist " << tr.getErgebnis() << endl;
        }
        else break;
    }
}