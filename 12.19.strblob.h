#ifndef STRBLOB_H
#define STRBLOB_H
#include <vector>
#include <initializer_list>
#include <memory>
#include <string>
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
    StrBlobPtr begin();
    StrBlobPtr end();
private:
    shared_ptr<vector<string>> data;
    void check(size_type i, const string &msg) const;
};
#endif
