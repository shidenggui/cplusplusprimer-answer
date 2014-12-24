#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){
    ostream_iterator<int> out(cout, " ");
    istream_iterator<int> in(cin);
    istream_iterator<int> eof;
    //sort(in, eof);
    vector<int> v(in, eof);
    sort(v.begin(), v.end());
/*    while(in != eof){*/
        //*out++ = *in++;
/*    }*/
    copy(v.begin(), v.end(), out);
    //copy(in, eof, out);
    return 0;
}
