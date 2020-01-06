#include <iostream>
using namespace std;
int main(){

    unsigned int ux = 1;
    int x = 1;
    //Shifts um Bit-Zahl
    cout << "Maximaler uint-Wert: " << ~(ux >> 31) << endl;
    cout << "Maximaler int Wert: " << ~(x << 31) << endl;
    cout << "Minimaler int Wert: " << (x << 31) << endl << endl;
    
    unsigned long uy = 1;
    long y = 1;
    cout << "Maximaler ulong-Wert: " << ~(uy >> 63) << endl;
    cout << "Maximaler long Wert: " << ~(y << 63) << endl;
    cout << "Minimaler long Wert: " << (y << 63) << endl << endl;

    unsigned long long ul = 1;
    long long l = 1;
    cout << "Maximaler ulonglong-Wert: " << ~(ul >> 63) << endl;
    cout << "Maximaler long Wert: " << ~(l << 63) << endl;
    cout << "Minimaler long Wert: " << (l << 63) << endl;

    return 0;
} 