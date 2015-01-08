#include <iostream>
#include <memory>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){
    size_t max = 10;
    cout << max << endl;
    unique_ptr<char []> up(new char[max]);
    string in;
    cin >> in;
    strcpy(&up[0], in.c_str());
    cout << &up[0];
    return 0;
}
