#ifndef STRBLOB_H
#define STRBLOB_H
#include <vector>
#include <initializer_list>
#include <memory>
#include <string>
#include "12.19.strblobptr.h"
using std::vector;
using std::make_shared;
using std::initializer_list;
using std::shared_ptr;
using std::string;
using std::out_of_range;
class StrBlobPtr;
class StrBlob {
    friend class StrBlobPtr;
public:
    typedef vector<string>::size_type size_type;
    StrBlob();
    StrBlob(initializer_list<string> il);
    size_type size() const {return data->size();}
    bool empty() const {return data->empty();}
    void push_back(const string &t) {data->push_back(t);}
    void pop_back();
    const string& front() const;
    const string& back() const;
    string& front();
    string& back();
    StrBlobPtr begin(){return StrBlobPtr(*this);}
    StrBlobPtr end(){
         auto ret = StrBlobPtr(*this, data->size());
         return ret;
    }
private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
};
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
#endif
