#include "HasPtr.h"
inline
HasPtr::HasPtr(const string &s, int a): ps(new string(s)), i(a){
}
inline
HasPtr::HasPtr(const HasPtr& p): ps(new string(*p.ps)), i(p.i){
}
inline
void swap(const HasPtr& lhs, const HasPtr& rhs){
    using std::swap;
    swap(*lhs.ps, *rhs.ps);
    swap(lhs.i, rhs.i);
}
inline
HasPtr& HasPtr::operator=(const HasPtr& rhs){
    swap(*this, rhs);
    return *this;
}
