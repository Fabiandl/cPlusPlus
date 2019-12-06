//
// Created by cpp on 06.12.19.
//

#include "MyQueueInt.h"


template <class T>
MyQueueInt<T>::MyQueueInt(initializer_list<T> args) {
    for(auto& elem : args){
        myVector.push_back(elem);
    }
}

template <class T>
void MyQueueInt<T>::push_back(T) {

}

template <class T>
void MyQueueInt<T>::pop_front() {

}

template <class T>
void MyQueueInt<T>::size() {

}

template <class T>
bool MyQueueInt<T>::empty() {

}

ostream& operator<<(ostream& stream, MyQueueInt<int>& mqi){

}