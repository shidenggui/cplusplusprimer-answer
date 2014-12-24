#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    vector<string> vstr{"2", "2", "2", "3", "3", "3", "3"};
    string s = "3";
    cout << "get num : " << s << "  count: " << count(vstr.begin(), vstr.end(), s);
    return 0;
}
