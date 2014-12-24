#include <iostream>
#include <vector>
using namespace std;

void resize(vector<string> &v, int size){
    v.resize(size + size / 2);
    cout <<"read: " << size <<"  size: " << v.size()<< "  capacity: " << v.capacity() << endl;
    v.resize(256 + 256 / 2);
}
int main(){
    vector<string> v;
    v.reserve(1024);
    resize(v, 256);
    resize(v, 512);
    resize(v, 1000);
    resize(v, 1048);
    return 0;
}
