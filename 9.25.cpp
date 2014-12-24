#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main(){
    list<int> li{1, 2, 3, 4, 5};
    auto e1 = li.begin();
    auto e2 = li.begin();
    ++e2;
    e1 = li.erase(e1, e2);
    for(const auto i : li){
        cout << i << " ";
    }
    cout << endl << "e1 == e2 : " << ((e1 == e2) ? "true" : "false") << endl;
    return 0;
}
