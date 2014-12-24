#include <iostream>
#include <string>
using namespace std;

void replace_str(string &s, const string &oldVal, const string &newVal){
    for(string::size_type i = 0; i != s.size();){
        auto op = oldVal.begin();
        int flag = i;
        while(s[i] == *op){
            ++i;
            ++op;
            if(op == oldVal.end()){
                 break;
            }else if(s.size() == i){
                break;
            }
        }
        if(op == oldVal.end()){
             s.erase(flag, oldVal.size());
             s.insert(flag, newVal);
            i = flag + newVal.size();
        }else{
            ++i;
        }
    }
}

void replace_str_use_substr(string &s, const string &oldVal, const string &newVal){
     for(string::size_type i = 0; i !=  s.size(); ++i){
         if(s.substr(i, oldVal.size()) == oldVal){
             s.erase(i, oldVal.size());
             s.insert(i, newVal);
            i += newVal.size() - 1;
         }
     }
}
void replace_str_use_replace(string &s, const string &oldVal, const string &newVal){
    for(string::size_type i = 0; i != s.size();){
        auto op = oldVal.begin();
        int flag = i;
        while(s[i] == *op){
            ++i;
            ++op;
            if(op == oldVal.end()){
                 break;
            }else if(s.size() == i){
                break;
            }
        }
        if(op == oldVal.end()){
             /*s.erase(flag, oldVal.size());*/
             /*s.insert(flag, newVal);*/
            s.replace(flag, oldVal.size(), newVal);
            i = flag + newVal.size();
        }else{
            ++i;
        }
    }
}
int main(){
    string s = "hellohelloll";
    string os = "ll";
    string ns = "eee";
    replace_str(s, os, ns);
    cout << s <<endl;
    replace_str_use_substr(s, os, ns);
    cout << s <<endl;
    string str{"To drive straight thru is a foolish, tho courageous act."};
    replace_str_use_substr(str, "tho", "though");
    replace_str_use_substr(str, "thru", "through");
    cout << str << endl;
    replace_str_use_replace(s, os, ns);
    cout << s <<endl;


    return 0;
}
