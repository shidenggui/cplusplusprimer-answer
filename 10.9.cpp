#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
    auto end_pos = unique(words.begin(), words.end());
    words.erase(end_pos, words.end());
}
int main(){
    vector<string> s{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    elimDups(s);
    for(const auto &i : s){
        cout << i << " ";
    }
    return 0;
}
