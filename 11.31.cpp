#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main(){
    multimap<string, string> m;
    m.insert({"luc", "yecao"});
    m.insert({"luc", "nahao"});
    m.insert({"lux", "kuanren"});
    string au;
    cin >> au;
    auto beg = m.find(au);
    if(beg != m.end()){
        m.erase(beg);
    }
    for(const auto &p : m){
         cout << "first : " << p.first << " second : " << p.second << endl;
    }
    return 0;
}
