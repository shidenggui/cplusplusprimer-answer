#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}
void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}
int main(){
    vector<string> s{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(s);
    stable_sort(s.begin(), s.end(), isShorter);
    for(const auto &i : s){
        cout << i << " ";
    }
    return 0;
}
