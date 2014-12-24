#include <iostream>
using namespace std;
class A{
    A(string s = ""):str(s){}
    A():str(""){};
    string str;
};
int main(){
    A a;
    return 0;
}
