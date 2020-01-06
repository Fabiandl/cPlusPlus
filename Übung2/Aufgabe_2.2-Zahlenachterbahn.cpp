#include <iostream>
using namespace std;


/*
    natüröiche Zahl > 0
    Wenn eingelesene Zahl gerade teile durch 2
    Wenn eingelesene Zahl nicht gerade multipliziere mit 3 und addiere mit 1

    Wen die sich ergebene Zahl > 1 dann wiederholen
    wenn die sich ergebene Zahl <= 1 dann stoppen

*/

int main(){
    long long max, zahl, iterrations;

    iterrations = 0;
    max = 0;
    //Solange keine Zahl größer 0 eingegeben wird, wiederhole Eingabeaufforderung
    do{
    cout << "Bitte Zahl größer 0 eingeben: " << endl;
    cin >> zahl;
    }
    while(!(zahl >  0));

    max = zahl;
    cout << "Startzahl: " << zahl << endl;

    //Wiederhole solange die errechnete Zahl größer 1
    do{
        iterrations ++;
        cout << "Iterration: " << iterrations << ": ";
        //Wenn Zahl gerade teile durch 2
        if(zahl % 2 == 0){
            zahl /= 2;
        }
        //Wenn Zahl ungerade multipliziere mit 3 und addiere mit 1
        else{
            zahl *= 3;
            zahl += 1;
            //Wenn Zahl neues Max ist, setzte dieses und stoppe bis zum nächsten ENTER drücken
            if(zahl > max){
                max = zahl;
                cout << "derzeitiges Max: " << zahl << " ENTER drücken" << endl;
                cin.get();
            }
        }
        cout << "derzeitige Zahl: " << zahl << endl;
    }while(zahl > 1);

    return 0;
}
