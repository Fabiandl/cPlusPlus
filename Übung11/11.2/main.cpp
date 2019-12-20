#include <thread>
#include <mutex>
#include <vector>
#include <iostream>

using namespace std;

int sum;
mutex mutex_sum;

void calc(int start, int end){
    lock_guard<mutex> lg(mutex_sum);
    int c = 0;
    while(start <=end){
        sum += start;
        start++;
    };
}

int main(){
    vector<thread> list;
    int n;
    int anzahlThreads;
    cout << "Gib Zahl ein: " << endl;
    cin >> n;

    cout << "Gib Zahl von Threads ein: " << endl;
    cin >> anzahlThreads;

    int calcInvervall = n / anzahlThreads;
    int rest = n % anzahlThreads;
    cout << "Intervall: " << calcInvervall << endl;

    for(int i = 0; i < anzahlThreads; i++){
        int startZahl = calcInvervall * i;
        int endZahl = calcInvervall * (i + 1)-1;
        if(i == anzahlThreads-1){
            endZahl = n;
        }
        cout <<"Start Intervall: "<<startZahl << endl;
        cout <<"End Intervall: " << endZahl << endl;

           list.emplace_back(thread (calc, startZahl,endZahl));
    }

    for(auto &t : list){
        t.join();
    }

    cout << "Ergebnis ist: " << sum << endl;
}