#include "array2d.h"
#include <iostream>

using namespace std;

int main() {
    int a[3][4] = { {1,2,3,4},
                    {2,6,1,8},
                    {5,1,2,1} };
    int b[4][1] = { 1,9,11,5 };
    Array2d<int> A(a);
    Array2d<int> B(b);
    Array2d<int> C = mmult(A,B);
    cout << "Test :";
    printArray(C);
}

