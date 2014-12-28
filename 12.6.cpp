#include <iostream>
#include <vector>
using namespace std;

vector<int> *malloc_vector(){
    return new vector<int>();
}
vector<int> *read(vector<int> *v){
    int n;
    while(cin >> n){
        v->push_back(n);
    }
    return v;
}
void print(vector<int> *v){
    for(const auto &i : *v){
        cout << i << " ";
    }
    delete v;
}
int main(){
    print(read(malloc_vector()));
    return 0;
}
