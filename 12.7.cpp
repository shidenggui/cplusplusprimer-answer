#include <iostream>
#include <vector>
#include <memory>
using namespace std;

shared_ptr<vector<int>> make_vec(){
    return make_shared<vector<int>>();
}
void read(shared_ptr<vector<int>> &pv){
    int n = 0;
    while(cin >> n){
        pv->push_back(n);
    }
}
void print(shared_ptr<vector<int>> &pv){
     for(const auto &i : *pv ){
         cout << i << " ";
     }
}
int main(){
    shared_ptr<vector<int>> sv = make_vec();
    read(sv);
    print(sv);
    return 0;
}
