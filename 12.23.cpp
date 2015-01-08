#include <iostream>
#include <memory>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){
    //connect char *
    const char *p = "111";
    const char *q = "222";
    unsigned int size = strlen(p) + strlen(q) + 1;
    unique_ptr<char []> up(new char[size]);
    strcpy(up.get(), p);
    strcat(up.get(), q);
    cout << up.get();
    //connect string
    string s1 = "qqq";
    string s2 = "aaa";
    unique_ptr<string> ups(new string());
    *ups = s1 + s2;
    cout << endl << *ups;
    return 0;
}
