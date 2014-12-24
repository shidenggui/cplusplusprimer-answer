#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    ifstream in("10.29.txt");
    istream_iterator<string> in_iter(in);
    istream_iterator<string> eof;
    vector<string> v;
    while(in_iter != eof){
        v.push_back(*in_iter++);
    }
    for(const auto &i : v){
        cout << i << endl;
    }
    return 0;
}
