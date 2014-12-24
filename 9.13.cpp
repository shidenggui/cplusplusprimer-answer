#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main(){
    list<int> li{1, 2, 3, 4, 5};
    vector<int> vint(li.begin(), li.end());
    vector<double> vdoublef(li.begin(), li.end());
    cout << "vint:\n";
    for(const auto i : vint){
        cout << i << " ";
    }
    cout << "vdoublef:\n";
    for(const auto i : vdoublef){
        cout << i << " ";
    }
    return 0;
}
