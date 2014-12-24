#include <iostream>
#include <string>
using namespace std;

int main(){
	string s1;
	string s2;
	do{
		cin>>s1>>s2;
		cout<<((s1.size() < s2.size()) ? s1 : s2)<<endl;
	}while(1);
	return 0;
}
