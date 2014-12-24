#include <iostream>
using namespace std;

struct Sales_data{
    string isbn() const;
    Sales_data& combine(const Sales_data&);
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
int main(){

    return 0;
}
