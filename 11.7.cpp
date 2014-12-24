#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

void add_new_fam(map<string, vector<string>> &fam, const string &first_name,
                 const vector<string> &last_name){
    fam[first_name] = last_name;
}
void add_new_last_name(map<string, vector<string>> &fam,
                       const string &exist_first_name,
                       const vector<string> &last_name){
    if(fam.find(exist_first_name) != fam.end()){
        //fam[exist_first_name] = last_name;
        copy(last_name.begin(), last_name.end(), back_inserter(fam[exist_first_name]));
        sort(fam[exist_first_name].begin(), fam[exist_first_name].end());
        fam[exist_first_name].erase(unique(fam[exist_first_name].begin(),
                                           fam[exist_first_name].end()),
                                    fam[exist_first_name].end());
    }
}
void print_map(map<string, vector<string>> &fam){
    for(const auto p : fam){
        cout << "first_name: " << p.first << " last_name: ";
        for(const auto &i : p.second){
            cout << i << " ";
        }
        cout << endl;
    }
}
int main(){
    map<string, vector<string>> fam;
    add_new_fam(fam, "alice", {"a", "aa", "aaa"});
    print_map(fam);
    add_new_last_name(fam, "alice", {"a", "aaaa"});
    print_map(fam);
    return 0;
}
