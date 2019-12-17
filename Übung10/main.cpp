//
// Created by cpp on 17.12.19.
//

#include "MyQueueInt.cpp"
#include <iostream>

int main(){
    MyQueueInt<int> mqi = {1,2,3};
    mqi.push_back(4);
    cout << mqi;
}
