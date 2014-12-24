#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<int> vint{2, 3, 3, 4, 4, 4};
    int num = 3;
    cout << "get num : " << num << "  count: " << count(vint.begin(), vint.end(), num);
    return 0;
}
