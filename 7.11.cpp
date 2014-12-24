#include <iostream>
using namespace std;

struct Sales_data{
    Sales_data() = default;
    Sales_data(const string &s): bookNo(s){};
    Sales_data(const string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(p * n){};
    Sales_data(istream &is);
    string isbn() const;
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
istream &read(istream &is, Sales_data &item){
    double price = 0;
    is>>item.bookNo>>item.units_sold>>item.revenue;
    return is;
}
ostream &print(ostream &os, const Sales_data &item){
     os<<item.isbn()<<" "<<item.units_sold<<" "
       <<item.revenue<<" "<<item.avg_price();
     return os;
}
string Sales_data::isbn() const{
    return bookNo;
}
double Sales_data::avg_price() const{
     return revenue / units_sold;
}
Sales_data::Sales_data(istream &is){
     read(is, *this);
}
int main(){
    Sales_data s1("book1");
    print(cout, s1)<<endl;
    Sales_data s2("book2", 2, 2);
    print(cout, s2)<<endl;
    Sales_data s3(cin);
    print(cout, s3)<<endl;
    return 0;
}
