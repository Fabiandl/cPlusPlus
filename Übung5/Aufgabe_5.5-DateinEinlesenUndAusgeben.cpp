#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
    Datei Hallo.cpp einlesen
    Inhalt Charweise auslen und und mit hexadezimal Darstellung von 16 Bytes ausgeben.
    Wenn der ASCIICODE nicht darstellbar, soll ein ". " ausgegeben werden  
*/

int main(){

    cout << "Datein ohne leerzeichen eingeben:" << endl;
    string files = "";
    string trenner = ".cpp";
    string singelFile;
    cin >> files;
    size_t pos = 0;
    while((pos = files.find(trenner)) <= files.length()) {
        singelFile = files.substr(0, pos);
        files.erase(0, pos + trenner.length());
        string content;
        //ifstream zum einlesen einer Textdatei
        singelFile += trenner;
        ifstream file(singelFile);

        //Wenn die Datei geöffnet werden kann
        if (file.is_open()) {
            //solange die Datei eine Zeile hat, packe diese in String "content"
            while (getline(file, content)) {
                string temp = content;
                cout << temp << endl;
            }
            file.close();
        } else {
            cerr << singelFile << " konnte nicht geöffnet werden" << endl;
        }
        return 0;
    }
}