#include <iostream>
#include <string>
using namespace std;

int main(){
    
    //Gegebener String
    string s = "17462309";
    //Result long
    long z = 0;
    long quer = 0;
    for(int i = 0; i < (int)s.length();i++){
        //Strig "s" Char-weise auslesen und Ascii Wert ermitteln
        long temp =  s.at(i) - 48; 
        //Für QUersumme addieren
        quer += temp;
        cout << "shifts: " << s.length()-i-1 << " ";
        cout << "temp:  " << temp <<" ";

        // Temp so oft mit 10 multiplizieren, wie es "0"en hat
        for(int k = 0; k < (int)s.length()-i-1;k++){
            temp = temp *10;
        }
        //Ergebis auf z addieren
        z += temp;
        cout << "multiply temp: " << temp << " ";
        cout << "Zwischen-ERG: " << z << endl;
    }
    cout << "Endgültiges Erg: " << z << endl;
    cout << "Endgültige Quersumme: " << quer << endl;

    return 0;
}