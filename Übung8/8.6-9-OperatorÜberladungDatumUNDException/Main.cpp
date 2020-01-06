#include "Datum.h"
#include <iostream>

using namespace std;

int main() {
    Datum date = Datum();

    date.set(10,02,2000);
    date << cout;

    Datum current = Datum();
    current.aktuell();

    if(date < current) {
        cout << "Alles Passt" << endl;
    }

    Datum copy = Datum(date);

    if(date == copy) {
        cout << "Alles Passt" << endl;
    }

    try {
        copy.set(00,00,0000);
    } catch (UngueltigesDatumException) {
        cout << "Ich bin doch nicht Dumm" << endl;
    }
}