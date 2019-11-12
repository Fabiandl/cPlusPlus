#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int a;
    int b;
    int c;
    int max;
    //Lies die Zahlen a und b ein
    cout << "a und b und c eigeben : ";
    cin >> a >> b >> c;
    
    max = fmax(a,b);
    if(max < fmax(max,c)){
        max = c;
    }

    cout << "Von " << a << ", " << b << ", " << c <<" ist die groesste: " << max << endl;

    return 0;
}
