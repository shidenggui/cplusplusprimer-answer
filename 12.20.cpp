#include <iostream>
#include <fstream>
#include "12.19.strblobptr.h"
using namespace std;

int main(int argc, char *argv[]){
    string line;
    ifstream in("12.20.input");
    StrBlob sb;
    while(getline(in, line)){
        sb.push_back(line);
    }
    auto psb = sb.begin();
    while(1){
        cout << psb.deref() << endl;
        psb.incr();
    }
    return 0;
}
