#include <iostream>
#include "7.21.h"
using namespace std;

int main(){
    Sales_data s1("book1");
    print(cout, s1)<<endl;
    Sales_data s2("book2", 2, 2);
    print(cout, s2)<<endl;
    Sales_data s3(cin);
    print(cout, s3)<<endl;
    return 0;
}
