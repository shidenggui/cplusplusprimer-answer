#include <iostream>
using namespace std;

struct Person{
    Person(const string name, const string address):name(name), address(address){};
    string getname() const;
    string getaddress() const;
    string name;
    string address;
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
