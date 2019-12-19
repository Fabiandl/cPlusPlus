//
// Created by cpp on 17.12.19.
//

#include "MyQueueInt.cpp"
#include <iostream>

ostream& operator<<(ostream& stream, MyQueueInt<int>& mqi){
    stream << "Queue: ";
    for(size_t x = 0; x < mqi.size();x++) {
        stream << *(mqi.begin + x) << ", ";
    }
    return stream;
}

int main(){
    MyQueueInt<int> mqi = {1,2,3};
    mqi.push_back(4);
    cout << mqi;
    mqi.pop_front();
    cout << mqi;
}


