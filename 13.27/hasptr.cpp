#include "hasptr.h"
inline HasPtr::HasPtr(const string &s):
    ps(new string(s)), i(0), use(new size_t(1)){}
inline HasPtr::HasPtr(const HasPtr &p):
    ps(p.ps), i(p.i), use(p.use){ ++*use; }
HasPtr& HasPtr::operator=(const HasPtr& rhs){
    ++*rhs.use;
    if(--*use == 0){
        delete ps;
        delete use;
    }
    ps = rhs.ps;
    i = rhs.i;
    use = rhs.use;
    return *this;
}
HasPtr::~HasPtr(){
    if(--*use == 0){
        delete ps;
        delete use;
    }
}
