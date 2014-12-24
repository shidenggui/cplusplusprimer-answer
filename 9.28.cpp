#include <iostream>
#include <forward_list>
using namespace std;

bool insert_str2_after_str1(forward_list<string> &fli, const string &strf, const string &stri){
    auto prev = fli.before_begin();
    auto curr = fli.begin();
    while(curr != fli.end()){
        if(*curr == strf){
            fli.insert_after(curr, stri);
            return true;
        }else{
            prev = curr++;
        }
    }
    fli.insert_after(prev, stri);
    return false;
}
int main(){
    forward_list<string> fli{"123", "hello", "qwe"};
    string strf = "hello";
    string stri = "ok";
    insert_str2_after_str1(fli, strf, stri);
    for(const auto i : fli){
        cout << i << " ";
    }
    cout << endl;
    insert_str2_after_str1(fli, "qwe", stri);
    for(const auto i : fli){
        cout << i << " ";
    }
    return 0;
}
