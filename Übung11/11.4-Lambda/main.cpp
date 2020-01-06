#include <iostream>
using namespace std;

    int z = 1;

int main(){

        auto addDouble = [] (double d1, double d2, double d3){
        return d1+d2+d3;
    };

        cout << addDouble(1.5,2.5,1.5) <<endl;

    int a = 2;
    int b = 4;

    auto proveValue = [=](int value){
        return (value >= a && value <= b);
    };

    cout << proveValue(3) << endl;
    cout << proveValue(6) << endl;


    auto doMinusOne = [&] {
        z = z *-1;
    };
    doMinusOne();
    cout << z;
}