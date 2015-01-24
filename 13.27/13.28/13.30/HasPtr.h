#ifndef HASPTR_H
#define HASPTR_H
#include <string>
using std::string;
class HasPtr {
    friend void swap(const HasPtr& lhs, const HasPtr& rhs);
public:
    HasPtr(const string &s = "", int i = 0);
    HasPtr(const HasPtr& p);
    HasPtr& operator=(const HasPtr& rhs);
private:
    string *ps;
    int i;
};
#endif
