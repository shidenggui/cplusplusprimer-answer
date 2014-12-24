#include <iostream>
#include <list>
#include <map>
#include <utility>
using namespace std;

int main(){
    map<string, list<int>> map;
    string word;
    while(cin >> word){
        map[word].push_back(1);
    }
    for(const auto &p : map){
        cout << "first : " << p.first;
        cout << "second : ";
        for(const auto &i : p.second){
            cout << i << " ";
        }
    }
    return 0;
}
