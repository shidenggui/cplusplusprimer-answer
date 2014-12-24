#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}
void biggest(vector<string> &words, vector<string>::size_type sz){
    elimDups(words);
    stable_sort(words.begin(), words.end(), [](const string &s1, const string &s2){return (s1.size() < s2.size()) ? true : false;});
    auto find_start = find_if(words.begin(), words.end(), [sz](const string &s){return (s.size() >= sz) ? true : false;});
    for_each(find_start, words.end(), [](const string &s){cout << s << " ";});
    /*for(const auto &i : words){*/
        //cout << i << " ";
    /*}*/
}
int main(){
    vector<string> s{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
    biggest(s, 5);
    return 0;
}
