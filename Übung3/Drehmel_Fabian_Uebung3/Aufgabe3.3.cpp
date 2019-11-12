#include <iostream>

using namespace std;
char peekZeichen();
char leseZeichen();
int leseZahl();
double leseFaktor();
double leseSummand();
double leseAusdruck();


int main(){
    cout<<"Dont touch magic!"<<endl;
    double erg= leseAusdruck();
    cout<<"Das Ergebnis lautet "<<erg<<endl;
}
char peekZeichen(){
    
    return cin.peek();
}

char leseZeichen(){
   
    char c[1];
    cin.read(c,1);
    return c[0];
}
int leseZahl(){
    int zahl;
    cin>>zahl;
    return zahl;
}

double leseFaktor(){
    
    char c=peekZeichen();
    if(c=='('){
        leseZeichen();
        double erg = leseAusdruck();
        c=leseZeichen();

        if(c!=')'){
            cout<<"FEHLER:')' erwartet!";
        }
        return erg;
    }else{
        return leseZahl();

    }
   }

double leseSummand(){
    double erg=leseFaktor();
    char c; 
    do{
        c=peekZeichen();
        if(c=='*'){
            leseZeichen();
            erg = erg * leseFaktor();
        }else if(c=='/'){
            leseZeichen();
            erg = erg / leseFaktor();
        }
    }while(c=='*'||c=='/');
    return erg;
}


double leseAusdruck(){
    double erg;
    char c=peekZeichen();
    if(c=='+'){
        leseZeichen();
        erg=leseSummand();
    }else if(c=='-'){
        leseZeichen();
        erg=(-1)*leseSummand();
    }else{
        erg=leseSummand();
    }

     
    do{
        c=peekZeichen();
        if(c=='+'){
            leseZeichen();
            erg = erg + leseSummand();
        }else if(c=='-'){
            leseZeichen();
            erg = erg - leseSummand();
        }
    }while(c=='+'||c=='-'); 

    return erg;
}