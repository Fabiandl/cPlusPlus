#include <iostream>
#include "rational.h"

using namespace std;

int main() {
    Rational rat = Rational();

    rat >> cin;
    rat << cout;

    Rational add = Rational();
    add >> cin;

    rat += add;

    rat << cout;

    Rational plus = rat + add;
    plus << cout;
}
