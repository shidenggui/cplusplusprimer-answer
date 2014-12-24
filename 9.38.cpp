#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int vsize = 0, vcapacity = 0;
    while(vcapacity < 1000){
        vcapacity = v.capacity();
        cout << "size : " << v.size() << "  capacity : " << vcapacity << endl;
        while(vcapacity == v.capacity()){
            v.push_back(1);
        }
    }
    return 0;
}
