#ifndef STRBLOBPTR_H
#define STRBLOBPTR_H
#include "12.19.strblob.h"
#include <string>
#include <vector>
#include <memory>
using std::vector;
using std::string;
using std::shared_ptr;
using std::weak_ptr;

class StrBlobPtr{
public:
    StrBlobPtr(): curr(0){};
    StrBlobPtr(StrBlob &a, size_t sz = 0): wptr(a.data), curr(sz){}
    string& deref() const;
    StrBlobPtr& incr();
private:
    shared_ptr<vector<string>> check(std::size_t, const string&) const;
    weak_ptr<vector<string>> wptr;
    std::size_t curr;
};


#endif
