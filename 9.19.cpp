#include <iostream>
#include <list>
using namespace std;

int main(){
    string s;
    list<string> dq;
    while(cin >> s){
        dq.push_back(s);
    }
    for(auto i = dq.cbegin(); i != dq.end(); ++i){
        cout << *i << " ";
    }
    return 0;
}
