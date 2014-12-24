#include <iostream>
#include <vector>
using namespace std;

int add(int a, int b){
    cout<<"add:"<<endl;
    return a + b;
}
int minu(int a, int b){
    cout<<"minu:"<<endl;
    return a - b;
}
int chen(int a, int b){
    cout<<"chen:"<<endl;
    return a * b;
}
int chu(int a, int b){
     cout<<"chu:"<<endl;
     return a / b;
}
int main(){
    vector<int (*)(int, int)> v;
    v.push_back(add);
    v.push_back(minu);
    v.push_back(chen);
    v.push_back(chu);
    int a = 4, b = 2;
    for(const auto &i : v){
         cout<<i(a, b)<<endl;
    }
    return 0;
}
