//
// Created by cpp on 06.12.19.
//
#ifndef UNTITLED_MYQUEUE_H
#define UNTITLED_MYQUEUE_H
#include <initializer_list>
#include <iosfwd>
#include <vector>

using namespace std;

template <class T>
class MyQueueInt {
public:
    typedef T* iterator;

    MyQueueInt(initializer_list<T> args);
    MyQueueInt();
    void push_back(T);
    void pop_front();
    int size();
    bool empty();
    iterator begin();
    iterator end();
    T* start;
    T* ending;

private:
    vector<T> myVector;

};


#endif //UNTITLED_MYQUEUE_H
