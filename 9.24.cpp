#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    cout << *v.begin()
         << v.front()
         << v.at(0)
         << v[0];
    return 0;
}
