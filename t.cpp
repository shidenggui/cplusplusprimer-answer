#include <iostream>
#include <vector>
#include <string>
using namespace std;

const string &shorterString(const string &s1, const string &s2){
    return s1.size() <= s2.size() ? s1 : s2;
}

string &shorterString(string &s1, string &s2){
    auto &r = shorterString(const_cast<const string&>(s1), const_cast<const string&>(s2));
    return const_cast<string&>(r);
}
int *reset(int *);
double *reset(double *);
int main(){
    string s1 = "hello";
    string s2 = "he";
    cout<<shorterString(s1, s2).size();
    #ifndef NDEBUG
    shorterString(s1, s2)[1] = 'j';

    #endif
    cout<<"\n";
    cout<<shorterString(s1, s2);
    string s3 = s1 + "world";
    cout<<endl<<s3<<endl;
	return 0;
}
