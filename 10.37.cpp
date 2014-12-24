#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>
using namespace std;

int main(){
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> lst;
    copy(v.rbegin() + 2, v.rend() - 3, back_inserter(lst));
    for(const auto &i : lst){
        cout << i << " ";
    }
    return 0;
}
