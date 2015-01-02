#ifndef CONST_STRBLOBPTR_H
#define CONST_STRBLOBPTR_H
#include "12.19.strblob.h"
#include <string>
#include <vector>
#include <memory>
using std::vector;
using std::string;
using std::shared_ptr;
using std::weak_ptr;

class ConstStrBlobPtr{
public:
    ConstStrBlobPtr(): curr(0){};
    ConstStrBlobPtr(const StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz){}
    const string& deref() const;
    ConstStrBlobPtr& incr();
private:
    shared_ptr<vector<string>> check(std::size_t, const string&) const;
    weak_ptr<vector<string>> wptr;
    std::size_t curr;
};


#endif
