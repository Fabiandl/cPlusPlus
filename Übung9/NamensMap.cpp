#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

typedef map<string, size_t> MapType;

class FunktorenSortieren{
public:
    bool operator() (const MapType::iterator &erstes, const MapType::iterator &zweites){
        if(erstes->second < zweites->second){
            return true;
        }
        return false;
    }
};

bool sortieren(const MapType::iterator &erstes, const MapType::iterator &zweites){
    if(erstes->second < zweites->second){
        return true;
    }
    return false;
}

int main() {
    string filePath = "/home/cpp/Test.txt";
    ifstream file(filePath);

    MapType myMap;

    vector<MapType::iterator> myVector;

    if (file.is_open()) {
        string content;
        size_t pos = 0;
        //solange die Datei eine Zeile hat, packe diese in String "content"
        while (getline(file, content)) {
            content += " ";
            string temp = content;
            string trenner = " ";
            while ((pos = content.find(trenner)) <= content.length()) {

                string potencialName = content.substr(0, pos);
                if (potencialName != "") {
                    content.erase(0, pos + trenner.length());
                    char underScore = '_';
                    bool good;
                    if ((isupper(potencialName.at(0)) && isalpha(potencialName.at(0))) ||
                        potencialName.at(0) == underScore) {
                        for (unsigned int x = 1; x < potencialName.length(); x++) {
                            if (isdigit(potencialName.at(x)) || isalpha(potencialName.at(x)) ||
                                potencialName.at(x) == underScore) {
                                good = true;
                            } else {
                                good = false;
                            }
                        }
                        if (good) {
                            if (myMap.count(potencialName) == 0) {
                                std::pair<string, size_t> p;
                                p.first = potencialName;
                                p.second = 1;
                                myMap.insert(p);
                                myVector.push_back(myMap.find(potencialName));
                            } else {
                                myMap.at(potencialName) = myMap.at(potencialName) + 1;
                            }
                        }
                    }
                }
            }
        }
        file.close();
    } else {
        cerr << filePath << " konnte nicht geöffnet werden" << endl;
    }
    MapType::iterator I = myMap.begin();
    while (I != myMap.end()) {
        cout << (*I).first << " : " << (*I).second << endl;
        ++I;
    }
//    sort(myVector.begin(),myVector.end(), sortieren);
    sort(myVector.begin(),myVector.end(), FunktorenSortieren());
    cout << "Soertiert:" << endl;
    size_t ende = myVector.size();
    if(myVector.size() > 20){
        ende = 20;
    }
    for(size_t i = myVector.size()-ende; i < myVector.size(); i++){
        cout << myVector[i]->first <<  " Wertigkeit: " << myVector[i]->second << endl;
    }
    return 0;
}