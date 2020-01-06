#include <iostream>
#include <cmath>
using namespace std;

double ehoch1(double x);
double factorial(double n);

int main(){

    for(int x = -40; x <= 40; x =x + 10){
        cout<<"Ehoch1:   " << ehoch1(x) << endl;
        cout<<"exp:      " <<exp(x) << endl;
    }
    return 0;
}


double ehoch1(double x){

    double zahl = 0;
    int i = 0;
    //While bis Term ca 0
    while((pow(abs(x),i)/factorial(i)) > 0.000000001){
        zahl += (pow(abs(x),i))/factorial(i);
        i++;
    }
        if(x < 0){
            zahl = 1/ zahl;
        }
    return zahl;
}

double ehoch2(double x){

    if(x > 0){
    double zahl = 0;
    int i = 0;
    //While bis Term ca 0
    while((pow(x,i)/factorial(i)) > 0.000000001){
        zahl += (pow(x,i))/factorial(i);
        i++;
    }
        if(x < 0){
            zahl = 1/ zahl;
        }
    return zahl;
    }
    else{
        return -1;
    }
}

double factorial(double i)
{
    if (i == 0){
        return 1;
    }
    else
        return i * factorial(i - 1);
}