#include <iostream>
#include <memory>
using namespace std;

int main(){
    int ix = 1024, *pi = &ix, *pi2 = new int(2049);
    typedef unique_ptr<int> IntP;
    IntP p1(pi);
    return 0;
}
