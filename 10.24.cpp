#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std::placeholders;
using namespace std;

bool check_size(const int n, int size){
    return (n > size) ? true : false;
}
int main(){
    string str = "1234567";
    vector<int> v{2, 4, 6, 8, 3};
    cout << *find_if(v.begin(), v.end(), bind(check_size, _1, str.size()));
    return 0;
}
