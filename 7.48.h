#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <string>
using namespace std;
class Sales_data{
public:
    explicit Sales_data(const string &s):bookNo(s){}
private:
    string bookNo;
};
#endif
