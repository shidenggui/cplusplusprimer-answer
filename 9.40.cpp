#include <iostream>
#include <vector>
using namespace std;

void resize(vector<string> &v, int size, bool one_time = false){
    if(one_time){
        v.clear();
        v.shrink_to_fit();
        v.reserve(1024);
    }
    v.resize(size + size / 2);
    cout << size << " | " << v.size()<< " | " << v.capacity() << endl;
}
int main(){
    vector<string> v;
    cout << "read | size | capacity" << endl;
    cout << "------ | ------ | ------" << endl;
    v.reserve(1024);
    resize(v, 256);
    resize(v, 512);
    resize(v, 1000);
    resize(v, 1048);
    cout << "if only read one time: \n" << endl;
    cout << "read | size | capacity" << endl;
    cout << "------ | ------ | ------" << endl;
    resize(v, 256, true);
    resize(v, 512, true);
    resize(v, 1000, true);
    resize(v, 1048, true);
        return 0;
}
