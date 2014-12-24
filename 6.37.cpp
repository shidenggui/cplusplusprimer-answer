#include <iostream>
#include <vector>
using namespace std;

string (&f(string (&s)[10]))[10]{
    return s;
}

/*string[10] &f(string (&s)[10]){*/
    //return s;
/*}*/
using vs = string(&)[10];
vs f2(string (&s)[10]){
    return s;
}

auto f3(string (&s)[10]) -> string (&)[10]{
     return s;
}
int main(){
    string s[10] = {"1","1","1","1","1","1","1","1","1","1",};
    cout<<f(s)[1]<<endl;
    cout<<f2(s)[1]<<endl;
    cout<<f3(s)[1]<<endl;
    return 0;
}
