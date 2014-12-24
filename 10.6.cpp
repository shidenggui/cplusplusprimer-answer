#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    fill_n(back_inserter(v), 10, 0);
    for(const auto i : v){
        cout << i <<" ";
    }
    cout << endl;
    fill_n(v.begin(), v.size(), 1);
    for(const auto i : v){
        cout << i <<" ";
    }
    cout << endl;
    return 0;
}
