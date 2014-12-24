#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[]){
    ofstream out(argv[1], ofstream::app);
    string s;
    cin >> s;
    out << s;
    return 0;
}
