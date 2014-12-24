#include <iostream>
using namespace std;

struct Person{
    string name;
    string address;
    string getname() const;
    string getaddress() const;
};
string Person::getname() const{
    return name;
}
string Person::getaddress() const{
    return address;
}
int main(){

    return 0;
}
