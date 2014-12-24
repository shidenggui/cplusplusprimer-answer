#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void unique_insert(vector<string> &words, const string &word){
    if(find(words.begin(), words.end(), word) == words.end()){
        words.push_back(word);
    }
}
int main(){
    vector<string> v{"a", "aa"};
    for(const auto &i : v){
        cout << i << " ";
    }
    cout << endl;
    unique_insert(v, "aa");
    for(const auto &i : v){
        cout << i << " ";
    }
    cout << endl;
    unique_insert(v, "aaa");
    for(const auto &i : v){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
