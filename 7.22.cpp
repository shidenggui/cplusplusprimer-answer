#include <iostream>
using namespace std;

class Person{
public:
    Person(const string name, const string address):name(name), address(address){};
    string getname() const;
    string getaddress() const;
private:
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
