#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v{1, 2, 3, 4, 5};
    //for_each(v.rbegin(), v.rend(), [](const int a){cout << a << " ";});
    for(auto begin = v.rbegin(); begin != v.rend(); ++begin){
        cout << *begin << " ";
    }
    return 0;
}
