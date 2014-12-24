#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <list>
using namespace std;

void copy_vector_to_lst(const vector<int> &v, list<int> &lst){
    unique_copy(v.begin(), v.end(), back_inserter(lst));
}
int main(){
    vector<int> v{1, 3, 3, 4, 4, 5, 6, 6};
    list<int> lst;
    copy_vector_to_lst(v, lst);
    for(const auto &i : lst){
        cout << i << " ";
    }
    return 0;
}
