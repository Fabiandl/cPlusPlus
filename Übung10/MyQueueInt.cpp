//
// Created by cpp on 06.12.19.
//

#include "MyQueueInt.h"
#include <iostream>


template <class T>
MyQueueInt<T>::MyQueueInt(initializer_list<T> args) {
    for(auto& elem : args){
        myVector.push_back(elem);
    }
    begin = myVector.data();
//    end = myVector + myVector.size();
}
template <class T>
MyQueueInt<T>::MyQueueInt() {
    begin = myVector.data();
//    end = myVector + myVector.size();
}


template <class T>
void MyQueueInt<T>::push_back(T value) {
    myVector.push_back(value);
}

template <class T>
void MyQueueInt<T>::pop_front() {
    cout << "Ganz vorne wird gelöscht:" <<myVector.begin();
    myVector.erase(myVector.begin());
}

template <class T>
int MyQueueInt<T>::size() {
    return myVector.size();
}

template <class T>
bool MyQueueInt<T>::empty() {
    return myVector.empty();
}

ostream& operator<<(ostream& stream, MyQueueInt<int>& mqi){
    stream << "Queue: ";
    for(size_t x = 0; x < mqi.end();x++) {
//        stream << mqi.begin + x;
    }
    return stream;
}

