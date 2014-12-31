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

shared_ptr<vector<string>> StrBlobPtr::check(size_t i, const string &msg) const {
     auto ret = wptr.lock();
     if(!ret){
         throw std::runtime_error("unbound StrBlobPtr");
     }
     if(i >= ret->size()){
          throw std::out_of_range(msg);
     }
     return ret;
}
string& StrBlobPtr::deref() const {
     auto p = check(curr, "dereference past end");
     return (*p)[curr];
}
StrBlobPtr& StrBlobPtr::incr(){
     check(curr, "increment past end of StrBlobPtr");
     ++curr;
     return *this;
}
#endif
