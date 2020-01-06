#include "IntMenge.h"
#include <iostream>
using namespace std;

int main(){

    IntMenge menge;
menge.hinzufuegen(2); // ok
menge.anzeigen();
menge.hinzufuegen(-9); // ok
menge.anzeigen();
menge.hinzufuegen(2); // keine Wirkung, 2 gibt es schon
menge.anzeigen();
menge.entfernen(99); // keine Wirkung, nicht vorhanden
menge.anzeigen();
menge.entfernen(-9); // ok
menge.anzeigen();
cout << "alles Loeschen:" << endl;
menge.loeschen();
menge.anzeigen();
for(int i=17; i < 33; ++i) {
    menge.hinzufuegen(i * i);
}
menge.anzeigen();
cout << "Anzahl = " << menge.size() << ", Minimum = " <<
menge.getMin() << ", Maximum = " << menge.getMax() << endl;
menge.anzeigen();

return 0;
}