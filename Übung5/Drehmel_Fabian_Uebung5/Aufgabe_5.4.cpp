//
// Created by fdl on 13.11.19.
//
#include <iostream>
using namespace std;


void leerzeichenEntfernen(char* s);
int getLaenge(char *s);

int main(){
    char text[]  = {'a','b',' ','c'};
    cout << "Text vorher : " << text << endl;
    leerzeichenEntfernen(text);
    cout << "Text nachher: " << text << endl;
}

void leerzeichenEntfernen(char *s){
    int laenge = getLaenge(s);
    char *first = s;
    for(unsigned int i = 0; i < laenge; i++){
        int temp = i;
        if(*s == ' '){
            temp = i;
            for(unsigned int j = i; j < laenge-1; j++){
                char * x =  s;
                *x++;
                *s = *x;
                *s++;
            }
            *s = '\0';
        }
        *s++;
        i = temp;
    }
    s = first;
}

int getLaenge(char *s) {
    int len = 0;
    while (*s++) {
    len++;
    }
    return len;
}

