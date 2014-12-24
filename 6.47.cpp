#include <iostream>
#include <vector>
using namespace std;

void print_vector(const vector<int> &v){
    if(v.size() != 0){
        cout<<v[v.size() - 1]<<" ";
        #ifndef NDEBUG
        cout<<"\nv.size(): "<<v.size()<<endl;
        #endif
        vector<int> vt(v.begin(), --v.end());
        print_vector(vt);
    }
    return;
}
int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    print_vector(v);
    return 0;
}
