#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main(){
    vector<pair<string, int>> vec;
    string str;
    while(cin >> str){
        int n;
        cin >> n;
        vec.push_back({str, n});
    }
    for(const auto &i : vec){
        cout << "first : " << i.first << endl;
        cout << "second : " << i.second << endl;
    }
    return 0;
}
