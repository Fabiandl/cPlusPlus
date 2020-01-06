#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string filePath = "/home/cpp/Test.txt";
    ifstream file(filePath);

    if(file.is_open()){
        string content;
        size_t pos = 0;
        //solange die Datei eine Zeile hat, packe diese in String "content"
        while (getline(file, content)) {
            content += " ";
            string temp = content ;
            string trenner = " ";
            while ((pos = content.find(trenner)) <= content.length()) {

                string potencialName = content.substr(0, pos);
                content.erase(0, pos + trenner.length());
                char underScore = '_';
                bool good;
                if((isupper(potencialName.at(0)) && isalpha(potencialName.at(0))) ||potencialName.at(0) == underScore ){
                    for(unsigned int x = 1; x < potencialName.length(); x++){
                        if(isdigit(potencialName.at(x)) || isalpha(potencialName.at(x)) || potencialName.at(x) == underScore){
                          good = true;
                        } else{
                            good = false;
                        }
                    }
                    if(good){
                        cout << potencialName << endl;
                    }
                }
            }
        }
        file.close();
    } else {
        cerr << filePath << " konnte nicht geöffnet werden" << endl;
    }
    return 0;
}