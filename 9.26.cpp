#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    list<int> li1(begin(ia), end(ia));
    vector<int> v2(begin(ia), end(ia));
    for(auto i = li1.begin(); i != li1.end();){
        if(*i % 2){
            i = li1.erase(i);
        }else{
            ++i;
        }
    }
    for(auto i = v2.begin(); i != v2.end();){
        if((*i % 2) == 0){
            i = v2.erase(i);
        }else{
             ++i;
        }
    }
    cout << "li1: ";
    for(const auto i : li1){
        cout << i << " ";
    }
    cout << "\nv2: ";
    for(const auto i : v2){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
