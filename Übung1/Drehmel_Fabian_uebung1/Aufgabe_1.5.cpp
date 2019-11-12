#include <iostream>
#include <string>
using namespace std;

string turnResult(string result);
int main(){


    int zahl = 5;
    string result = "";
    for(int i = 0; i <= 31; i++){
        if((zahl << 1) & (1 << i)){
            result += "1";
        }else{
            result += "0";
        }
    }
    result = turnResult(result);
    cout << "in 32-Bit: " << result << endl; 
}
string turnResult(string result){
    string newResult = "";
    for(int j = result.length()-1; j > 0; j--){
        if(result.at(j) == '0'){
            newResult += "0";
        }
        else{
            newResult += "1";
        }
    }
    return newResult;

    return 0;
}