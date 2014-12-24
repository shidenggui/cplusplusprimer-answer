#ifndef CP5_SALES_H
#define CP5_SALES_H
#include <iostream>
using namespace std;
class Sales_data;
istream &read(istream &, Sales_data &);
class Sales_data{
public:
    friend istream &read(istream &, Sales_data &);
    friend ostream &print(ostream &, const Sales_data &);
    Sales_data() = default;
    Sales_data(const string &s): bookNo(s){};
    Sales_data(const string &s, unsigned n, double p):bookNo(s), units_sold(n), revenue(p * n){};
    Sales_data(istream &is){
        read(is, *this);
    }
    string isbn() const;
    Sales_data& combine(const Sales_data&);
    double avg_price() const;
private:
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
/*Sales_data::Sales_data(istream &is){*/
     //read(is, *this);
/*}*/

#endif
