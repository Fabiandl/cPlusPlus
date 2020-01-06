#include <iostream>
#include "Taschenrechner.h"
#include <string>
using namespace std;



Taschenrechner::Taschenrechner(string rechnung){
    rec = rechnung;
}

string Taschenrechner::getAnfrage(){
    return rec;
}

double Taschenrechner::getErgebnis(){
    return leseAusdruck(rec);
}

char Taschenrechner::peekZeichen(string rechnung){
    char c;
	if(counter < rechnung.length()){
    c = rechnung.at(counter);
    }
    else{
    c = ' ';
    }
    return c;
}

char Taschenrechner::leseZeichen(string rechnung){
		char c;
		c = peekZeichen(rechnung);
		counter++;
		return c;
}
int Taschenrechner::leseZahl(string rechnung){
	int zahl = 0;
	while(isdigit(peekZeichen(rechnung))){
	char c = leseZeichen(rechnung);
	zahl *= 10;
	zahl += c;
	}
    cout << "zahl: " << zahl<< endl;
	return zahl;
}

double Taschenrechner::leseFaktor(string rechnung){
    
    char c=peekZeichen(rechnung);
    if(c=='('){
        leseZeichen(rechnung);
        double erg = leseAusdruck(rechnung);
        c=leseZeichen(rechnung);

        if(c!=')'){
            cout<<"FEHLER:')' erwartet!";
        }
        return erg;
    }else{
        return leseZahl(rechnung);

    }
   }

double Taschenrechner::leseSummand(string rechnung){
    double erg=leseFaktor(rechnung);
    char c; 
    do{
        c=peekZeichen(rechnung);
        if(c=='*'){
            leseZeichen(rechnung);
            erg = erg * leseFaktor(rechnung);
        }else if(c=='/'){
            leseZeichen(rechnung);
            erg = erg / leseFaktor(rechnung);
        }
    }while(c=='*'||c=='/');
    return erg;
}


double Taschenrechner::leseAusdruck(string rechnung){
    double erg;
    char c=peekZeichen(rechnung);
    cout << "peek: " << c << endl;
    if(c=='+'){
        leseZeichen(rechnung);
        erg=leseSummand(rechnung);
    }else if(c=='-'){
        leseZeichen(rechnung);
        erg=(-1)*leseSummand(rechnung);
    }else{
        erg=leseSummand(rechnung);
    }

     
    do{
        c=peekZeichen(rechnung);
        if(c=='+'){
            leseZeichen(rechnung);
            erg = erg + leseSummand(rechnung);
        }else if(c=='-'){
            leseZeichen(rechnung);
            erg = erg - leseSummand(rechnung);
        }
    }while(c=='+'||c=='-'); 

    return erg;
}