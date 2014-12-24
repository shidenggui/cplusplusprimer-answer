#include <iostream>
#include <list>
#include <deque>
using namespace std;

int main(){
    list<int> li = {1, 2, 3, 4, 5};
    deque<int> dq1, dq2;
    for(const auto i : li){
        (i % 2) ? dq1.push_back(i) : dq2.push_back(i);
    }
    cout << "dq1 : ";
    for(const auto i : dq1){
        cout << i << " ";
    }
    cout << endl;
    cout << "dq2 : ";
    for(const auto i : dq2){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
