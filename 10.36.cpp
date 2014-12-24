#include <iostream>
#include <algorithm>
#include <list>
using namespace std;

int main(){
    list<int> lst{1, 2, 3, 0, 4, 5};
    auto begin = find(lst.rbegin(), lst.rend(), 0);
    for_each(begin.base(), lst.end(), [](const int n){cout << n << " ";});
    return 0;
}
