#include <thread>
#include <iostream>
#include <chrono>
#include <string>

using namespace std;

void start(int z){

    cout << this_thread::get_id() << " ist gestartet" << endl;
    this_thread::sleep_for(chrono::seconds(z));
    cout << this_thread::get_id() << " ist beeendet" << endl;
}


int main(){
    thread t1(start, 1);
    thread t2(start, 2);
    thread t3(start, 3);
    t1.join();
    t2.join();
    t3.join();
}