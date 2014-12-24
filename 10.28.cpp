#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <list>
using namespace std;

int main(){
    vector<int> v;
    list<int> dv;
    for(int i = 0; i != 10; ++i){
        v.push_back(i);
    }
    copy(v.begin(), v.end(), inserter(dv, dv.begin()));
    for(const auto &i : dv){
        cout << i <<" ";
    }
    cout << endl;
    dv.clear();
    copy(v.begin(), v.end(), back_inserter(dv));
    for(const auto &i : dv){
        cout << i <<" ";
    }
    cout << endl;
    dv.clear();
    copy(v.begin(), v.end(), front_inserter(dv));
    for(const auto &i : dv){
        cout << i <<" ";
    }
    cout << endl;
    return 0;
}
