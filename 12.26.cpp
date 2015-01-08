#include <iostream>
#include <memory>
#include <string>
using namespace std;

int main(int argc, char *argv[]){
    const int n = 3;
    allocator<string> al;
    auto p = al.allocate(n);
    auto q = p;
    string s;
    for(int i = 0; i != n && cin >> s; ++i){
        al.construct(p++, s);
    }
    auto k = q;
    while(q != p){
         cout << *q++ << endl;
    }
    while(k != p){
         al.destroy(--p);
    }
    al.deallocate(k, n);
    return 0;
}
