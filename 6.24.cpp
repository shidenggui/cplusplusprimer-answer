#include <iostream>
using namespace std;

//use point
void print1(const int *p){
    while(!p){
        cout<<*p++<<" "<<endl;
    }
}
//use size
void print2(const int *p, int n){
    while(n--){
        cout<<*p++<<" "<<endl;
    }
}
//use iter
void print3(const int *beg, const int *end){
    while(beg != end){
        cout<<*beg++<<" "<<endl;
    }
}
//use ref
void print4(const int (&r)[2]){
    for(const auto i : r){
        cout<<i<<" "<<endl;
    }
}
int main(){
    int j[2] = {1, 2};
    //cout<<"print1 "<<endl;
    //print1(j);
    cout<<"print2"<<endl;
    print2(j, 2);
    cout<<"print3"<<endl;
    print3(begin(j), end(j));
    cout<<"print4"<<endl;
    print4(j);
    return 0;
}
