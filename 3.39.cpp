#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	string s1 = "wq";
	string s2 = "we";
	const char *p1 = "charp1";
	const char *p2 = "charp1";

	//compare string
	cout<<"s1 is "<<((s1 == s2) ? "" : "not ")<<"equle s2"<<endl;
	
	//compare c string
	cout<<"strcmp(p1, p2) : "<<strcmp(p1, p2)<<endl;
	cout<<"p1 is "<<((strcmp(p1, p2) == 0) ? "" : "not ")<<"equle p2"<<endl;
	return 0;	
}
