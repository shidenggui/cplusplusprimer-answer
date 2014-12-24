#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v{1, 2, 3, 4, 5};
    for(auto end = v.end() - 1; end != (v.begin() - 1); --end){
        cout << *end << " ";
    }
    return 0;
}
