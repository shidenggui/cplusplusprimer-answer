#include <iostream>
#include <vector>
using namespace std;
bool find_in_vector(vector<int>::iterator it1, vector<int>::iterator it2, int k){
    while(it1 != it2){
        if(*it1 == k){
            cout<< "find";
            return true;
        }
        ++it1;
    }
    return false;
}
int main(){
    vector<int> v{3,5,7,9,11};
    find_in_vector(v.begin(), v.end() , 11);
    return 0;
}
