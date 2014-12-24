#include <iostream>
using namespace std;

int main(){
    int sz;
    cin >> sz;
    auto f = [sz](int a){return a + sz;};
    cout << f(3);
    return 0;
}
