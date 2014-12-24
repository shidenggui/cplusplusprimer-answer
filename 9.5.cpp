#include <iostream>
#include <vector>
using namespace std;
vector<int>::iterator find_in_vector(vector<int>::iterator it1, vector<int>::iterator it2, int k){
    while(it1 != it2){
        if(*it1 == k){
            return it1;
        }
        ++it1;
    }
    cout << "can't find value! return iterator point last!";
    return it2;
}
int main(){
    vector<int> v{3,5,7,9,11};
    vector<int>::iterator it = find_in_vector(v.begin(), v.end() , 1);
    cout << endl << *it;
    return 0;
}
