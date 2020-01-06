#include <functional>
#include <iostream>
using namespace std;

double eval(std::function<double(double)> f, double x){
    return f(x);
}

int main(){

    std::function<double(double)> mal2 = [](double x){
        return x * 2;
    };

    cout << eval(mal2,2);
}