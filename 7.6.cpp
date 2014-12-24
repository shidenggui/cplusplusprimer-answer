#include <iostream>
using namespace std;

struct Sales_data{
    string isbn() const;
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
istream &read(istream &is, Sales_data &item){
    double price = 0;
    is>>item.bookNo>>item.units_sold>>price;
    return is;
}
ostream &print(ostream &os, const Sales_data &item){
     os<<item.isbn()<<" "<<item.units_sold<<" "
       <<item.revenue<<" "<<item.avg_price();
     return os;
}
int main(){

    return 0;
}
