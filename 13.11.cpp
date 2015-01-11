#include <iostream>
using namespace std;

class HasPtr {
    friend void print(ostream& os, HasPtr &rhs);
public:
    HasPtr(const string &s = string()):
        ps(new string(s)), i(0){}
    HasPtr(const HasPtr &rhs){
        ps = new string(*rhs.ps);
        i = rhs.i;
    }
    HasPtr& operator=(const HasPtr &rhs){
        *ps = *rhs.ps;
        i = rhs.i;
    }
    ~HasPtr(){
         delete ps;
    }
private:
    string *ps;
    int i;
};
void print(ostream &os, HasPtr &rhs){
     os << *rhs.ps << " i: " << rhs.i << endl;
}
int main(){
    HasPtr p1("111");
    HasPtr p2 = p1;
    print(cout, p2);
    HasPtr p3;
    print(cout, p3);
    p3 = p2;
    print(cout, p3);
    return 0;
}
