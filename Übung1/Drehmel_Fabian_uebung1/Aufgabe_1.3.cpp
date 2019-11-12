#include <cmath>
#include <iostream>
using namespace std;
int main(){

    int p = 10;
    int q = 5;

    double x1, x2;
    
    x1 = -(p/2) + sqrt((pow((p/2),2)) - q);
    x2 = -(p/2) - sqrt((pow((p/2),2)) - q);

    cout <<"x²+"<<p<<"x+"<<q<<"= 0" << endl;
    cout <<"Ergebnis: x1="<<x1 <<" , x2=" <<x2<<endl; 
    
    return 0;
}