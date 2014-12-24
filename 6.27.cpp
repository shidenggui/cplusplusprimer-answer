#include <iostream>
using namespace std;

void error_msg(initializer_list<string> il){
    for(const auto &i : il){
        cout<<i<<endl;
    }
}
int sum(initializer_list<int> li){
    int sum = 0;
    for(const auto i : li){
        sum += i;
    }
    cout<<sum<<endl;
    return sum;
}
int main(){
    //error_msg({"12","56"});
    sum({3, 5, 7});
    return 0;
}
