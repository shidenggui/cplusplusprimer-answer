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
istream &read(istream &is, Person &p){
     is >> p.name >> p.address;
     return is;
}
ostream &print(ostream &os, const Person &p){
     os << p.name << " " << p.address;
     return os;
}
int main(){
    Person p;
    read(cin, p);
    print(cout, p);
    return 0;
}
