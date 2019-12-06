//
// Created by cpp on 06.12.19.
//
#ifndef UNTITLED_MYQUEUEINT_H
#define UNTITLED_MYQUEUEINT_H
#include <initializer_list>
#include <iosfwd>
#include <vector>

using namespace std;

template <class T>
class MyQueueInt {
public:
    MyQueueInt(initializer_list<T> args);
    void push_back(T);
    void pop_front();
    void size();
    bool empty();

private:
    vector<T> myVector;
};


#endif //UNTITLED_MYQUEUEINT_H
