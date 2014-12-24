#include <iostream>
#include <map>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    map<string, size_t> word_count;
    string word;
    while(cin >> word){
        for(char &c : word){
            if(isupper(c)){
                c = tolower(c);
            }
        }
        /*auto punct = find_if(word.begin(), word.end(), [](const char c){ return (ispunct(c) ? true : false);});*/
        /*word.erase(punct, word.end());*/
        word.erase(remove_if(word.begin(), word.end(), ::ispunct), word.end());
        ++word_count[word];
    }
    for(const auto &i : word_count){
        cout << i.first << " occurs " << i.second << ((i.second > 1) ? " times" : " time") << endl;
    }
    return 0;
}
