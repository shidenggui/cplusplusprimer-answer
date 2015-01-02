#include "12.20.conststrblobptr.h"
shared_ptr<vector<string>> ConstStrBlobPtr::check(size_t i, const string &msg) const {
     auto ret = wptr.lock();
     if(!ret){
         throw std::runtime_error("unbound StrBlobPtr");
     }
     if(i >= ret->size()){
          throw std::out_of_range(msg);
     }
     return ret;
}
const string& ConstStrBlobPtr::deref() const {
     auto p = check(curr, "dereference past end");
     return (*p)[curr];
}
ConstStrBlobPtr& ConstStrBlobPtr::incr(){
     check(curr, "increment past end of StrBlobPtr");
     ++curr;
     return *this;
}
