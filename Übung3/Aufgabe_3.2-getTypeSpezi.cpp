#include<iostream>
using namespace std;


template<typename T>
string getType(T& a){
    return "unbekannter typ";
}
template<>
string getType< int>(int& a){
    return "int";
}
template<>
string getType<unsigned int>( unsigned int& a){
    return "unsigned int";
}
template<>
string getType<char>(char& a){
    return "char";
}
template<>
string getType<bool>(bool& a){
    return "bool";
}




int main() {
    // Ausgabe
    int i;
    cout << getType(i) << endl; // int
    unsigned int ui;
    cout << getType(ui) << endl; // unsigned int
    char c;
    cout << getType(c) << endl; // char
    bool b;
    cout << getType(b) << endl; // bool
    // Annahme: float ist nicht in getType() berücksichtigt:
    float f;
    cout << getType(f) << endl; // unbekannter Typ!
}