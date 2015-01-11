#include <iostream>
#include "textquery.h"
#include "queryresult.h"
using namespace std;

void runQueries(ifstream &infile){
    TextQuery tq(infile);
    while(true){
        cout << "enter word to look for, or q to quit: ";
        string s;
        if(!(cin >> s) || s == "q") break;
        print(cout, tq.query(s)) << endl;
    }
}
int main(int argc, char *argv[]){
    ifstream in("text.txt");
    runQueries(in);
    return 0;
}
