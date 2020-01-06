#include <iostream>
#include "rational.h"
using namespace std;

int main(){
    //Test für Aufgabe_4.1
    Rational bruch1(1,2);
    long l = 4;
    bruch1.add(l);
    bruch1.ausgabe();


    return 0;
}