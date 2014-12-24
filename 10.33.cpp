#include <iostream>
#include <iterator>
#include <fstream>
using namespace std;

int main(){
    ifstream file_in("10.33.in");
    istream_iterator<int> in(file_in);
    istream_iterator<int> eof;
    ofstream file_odd_out("10.33.odd.out");
    ofstream file_idol_out("10.33.idol.out");
    ostream_iterator<int> odd_out(file_odd_out, " ");
    ostream_iterator<int> idol_out(file_idol_out, "\n");

    while(in != eof){
        (*in % 2) ? odd_out = *in++ : idol_out = *in++;
    }
    return 0;
}
