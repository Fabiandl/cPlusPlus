#include <iostream>
using namespace std;
/*
Berechnen Sie die Summe aller natürlichen Zahlen von n1 bis n2
mit

    einer for- Schleife,
    einer while-Schleife,
    einer do while-Schleife,
    ohne Schleife.

Dabei werden n1
und n2 über die Tastatur eingegeben. Es muss überprüft werden, dass n2≥n1 gilt!
*/
int main(){

int n1, n2;

 //Lies die Zahlen n1 und n2 ein
    cout << "n1 und n2 eigeben : ";
    cin >> n1 >> n2;
//Überprüfen, ob n2 >= n1
if(n2 >= n1){
    //while
    int sum = n1;
    int lauf = n1, bis = n2;
    
    while(lauf < bis){
        lauf += 1;
        sum += lauf;
    }

    cout << sum << endl;

    //for
    int sum2 = n1;
    int lauf2 = n1, bis2 = n2;

    for(int l = lauf2+1; l <= bis2; l++){
        sum2 += l;
    }
    cout << sum2 << endl;

    //do while
    int sum3 = n1;
    int lauf3 = n1, bis3 = n2;

    do{
        lauf3 += 1;
        sum3 += lauf3;
    }while(lauf3 < bis3);

    cout << sum3 << endl;
    }
    
    //ohne Schleife
    int sum4 = n1;
    int lauf4 = n1, bis4 = n2;
    
    sum4 = bis4*(bis4+1)/2 - (lauf4*(lauf4+1)/2) + n1;

    cout << sum4 << endl;

    return 0;
}