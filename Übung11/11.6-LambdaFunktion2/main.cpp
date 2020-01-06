#include <functional>
#include <iostream>
using namespace std;


double newtonNUKE(std::function<double(double)> f, std::function<double(double)> fStrich, double x){
    for(int i = 1; i < 100; i++){
        x = x - (f(x)/fStrich(x));
    }
    return x;
}

int main(){

    std::function<double(double)> a1 = [](double x){
        return (x*x*x);
    };

    std::function<double(double)> a1Strich = [](double x){
        return (3*(x*x));
    };

    std::function<double(double)> a2 = [](double x){
        return (x-2)*(x-2);
    };

    std::function<double(double)> a2Strich = [](double x){
        return 2*(x-2);
    };

    cout << newtonNUKE(a1,a1Strich, 24) << endl;
    cout << newtonNUKE(a2,a2Strich, 2) << endl;
}