#include <iostream>
#include <list>
using namespace std;

void elimWords(list<string> &words){
    words.sort();
    words.unique();
    for(const auto &i : words){
        cout << i << " ";
    }
}
int main(){
    list<string> lst{"22", "22", "322", "322", "4"};
    elimWords(lst);
    return 0;
}
