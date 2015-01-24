#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
class Employee {
public:
    Employee(const string &s);
    void print() const;
private:
    int id;
    string name;
    static int id_seed;
};
#endif
