#include <iostream>
#include <deque>
using namespace std;

int main(){
    string s;
    deque<string> dq;
    while(cin >> s){
        dq.push_back(s);
    }
    for(auto i = dq.cbegin(); i != dq.end(); ++i){
        cout << *i << " ";
    }
    return 0;
}
