//
// Created by cpp on 17.12.19.
//

#include "MyQueue.cpp"
#include <iostream>
#include <string>

template <class T>
ostream& operator<<(ostream& stream, MyQueueInt<T>& mqi){
    stream << "Queue: ";
    for(size_t x = 0; x < mqi.size();x++) {
        stream << *(mqi.start + x) << ", ";
    }
    return stream << endl;
}

int main(){
    MyQueueInt<int> mqi = {1,2,3};
    mqi.push_back(4);
    cout << mqi;
    mqi.pop_front();
    cout << mqi;

    cout << "Toller Iterator: " << endl;
    for (auto elem : mqi)
        cout << elem << endl;


    MyQueueInt<string> mqs = {"Generisch", "ist", "König"};
    mqs.push_back("!");
    cout << mqs;
}


