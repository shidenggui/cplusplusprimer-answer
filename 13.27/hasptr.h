#ifndef HASPTR_H
#define HASPTR_H
#include <string>
using std::string;
using std::size_t;
class HasPtr {
public:
    HasPtr(const string &s = string());
    HasPtr(const HasPtr &p);
    HasPtr& operator=(const HasPtr&);
    ~HasPtr();
private:
    string *ps;
    int i;
    size_t *use;
};
#endif
