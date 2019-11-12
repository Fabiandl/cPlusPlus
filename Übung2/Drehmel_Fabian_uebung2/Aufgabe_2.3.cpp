#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*
    Datei Hallo.sec einlesen
    Inhalt Charweise auslen und und mit hexadezimal Darstellung von 16 Bytes ausgeben.
    Wenn der ASCIICODE nicht darstellbar, soll ein ". " ausgegeben werden  
*/

int main(){

    string content;
    //ifstream zum einlesen einer Textdatei
    ifstream file ("Hallo.sec");

    //Wenn die Datei geöffnet werden kann
    if(file.is_open()){
    	//solange die Datei eine Zeile hat, packe diese in String "content"
        while( getline(file, content)){
            string temp = content;
            //für jedes char in jeder Zeile
            for(int i = 0; i < (int)content.size(); i ++){
                char c = content.at(i);
                //Wenn char in Ascii Tabelle, gib char in hex aus, sont "."
                if((int) c > 0  && (int) c < 255){
                cout << hex << (int)c << " ";
                }
                else{
                    cout << "." << " "; 
                }
            }
            cout << temp << endl;
        }
         file.close();
    }
    else{
        cerr << "open ofs Fehler" << endl;
        exit(-1);
    }
    return 0;
}
