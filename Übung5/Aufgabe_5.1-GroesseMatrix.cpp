#include <iostream>
using namespace std;


int main(){
 int matrix[2][3];

cout << 2*3*sizeof(matrix) << endl;
}

/*Angenommen das Element matrix[0][0] liegt an der Adresse 0. 
An welcher Adresse liegt das Element matrix[i][j]? Geben Sie eine Formel für die Berechnung an (Pseudocode).

    
    Byte-Stelle  : sizeof(matrix[0]) * (i) + sizeof(int) * (j)
    Array-Stelle : sizeof(matrix[0])/sizeof(int) * (i) + j
*/