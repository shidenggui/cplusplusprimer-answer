#include "12.19.strblob.h"
#include "12.19.strblobptr.h"
#include "12.20.conststrblobptr.h"
StrBlob::StrBlob(): data(make_shared<vector<string>>()){}
StrBlob::StrBlob(initializer_list<string> il): data(make_shared<vector<string>>(il)){}
void StrBlob::check(size_type i, const string &msg) const {
    if(i > data->size()){
        throw out_of_range(msg);
    }
}
string &StrBlob::front(){
     check(0, "front on empty StrBlob");
     return data->back();
}
string &StrBlob::back(){
     check(0, "back on empty StrBlob");
     return data->back();
}
const string &StrBlob::front() const {
     check(0, "front on empty StrBlob");
     return data->back();
}
void StrBlob::pop_back(){
     check(0, "pop_back on empty StrBlob");
     return data->pop_back();
}
StrBlobPtr StrBlob::begin(){
     return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end(){
    auto ret = StrBlobPtr(*this, data->size());
    return ret;
}
ConstStrBlobPtr StrBlob::begin() const{
     return ConstStrBlobPtr(*this);
}
ConstStrBlobPtr StrBlob::end() const{
    return ConstStrBlobPtr(*this, data->size());
}
