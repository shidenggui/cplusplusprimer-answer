#include <iostream>
#include <algorithm>
using namespace std;

bool string_than_5_words(const string &s){
    return (s.size() >= 5) ? true : false;
}
int main(){
    vector<string> s{"12345", "1234", "12345", "1234", "12345"};
    partition(s.begin(), s.end(), string_than_5_words);
    for(const auto &i : s){
        cout << i << " ";
    }
    return 0;
}
