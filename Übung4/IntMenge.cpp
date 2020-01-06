#include "IntMenge.h"
#include <iostream>
using namespace std;

IntMenge::IntMenge(){}

IntMenge::IntMenge(const IntMenge & eineINtMenge){
    menge = eineINtMenge.menge;
}

void IntMenge::hinzufuegen(int el){
    if(!istMitglied(el)){
    menge.insert(menge.end(),el);
    }
}

void IntMenge::entfernen(int el){
    if(istMitglied(el)){
        for(unsigned int x = 0; x < size(); x++){
            if(menge[x] == el){
                menge.erase(menge.begin() + x);
            }
        }
    }
}

bool IntMenge::istMitglied(int el){
    bool vorhanden = false;
    for(unsigned int i = 0; i < size(); i++){
        if(menge[i] == el){
            vorhanden = true;
        }
    }
    return vorhanden;
}

size_t IntMenge::size(){
    return menge.size();
}

void IntMenge::anzeigen(){
    cout << "Menge: " << endl;
    for(unsigned int z = 0; z < size(); z++){
        cout << menge[z] << ", ";
    }
    cout << endl;
} 

void IntMenge::loeschen(){
    for(unsigned int z = 0; z < size(); z++){
        menge.erase(menge.begin() + z);
    }
}

int IntMenge::getMax(){
    int max = menge[0];
    for(unsigned int u = 1; u < size(); u++){
        if(menge[u] > max){
            max = menge[u];
        }
    }
    return max;
}

int IntMenge::getMin(){
     int min = menge[0];
    for(unsigned int u = 1; u < size(); u++){
        if(menge[u] < min){
            min = menge[u];
        }
    }
    return min;
}