#include <thread>
#include <iostream>
#include <condition_variable>
#include <mutex>
#include <chrono>
using namespace std;

condition_variable cv1;
mutex l_mutex1;

condition_variable cv2;
mutex l_mutex2;

condition_variable cv3;
mutex l_mutex3;

void start(condition_variable* cv, condition_variable* next, mutex* mut) {
    unique_lock<mutex> ul(*mut);
    (*cv).wait(ul);
    cout << this_thread::get_id() << " ist weg!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << this_thread::get_id() << " Moin Servus Moin!" << endl;

    (*next).notify_one();
    }



int main(){
    thread t1(start, &cv1,& cv2, &l_mutex1);
    thread t2(start, &cv2, &cv3, &l_mutex2);
    thread t3(start, &cv3, &cv3, &l_mutex3);


    cv1.notify_one();
    t1.join();
    t2.join();
    t3.join();
}