#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main(){
    ifstream in("ippro");
    ofstream out("ipproout");
    string line;
    int num = 0;
    while(in >>line){
        out << "case " << line << ":" << endl;
        ++num;
        getline(in, line);
        out << "    ip_protocal = " << "\""
            << line << "\";" << endl;
        out << "    break;";
        out << endl;
    }
    in.close();
    out.close();
    return 0;
}
