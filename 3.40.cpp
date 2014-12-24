#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main(){
	const char *p1 = "charp1";
	const char *p2 = "charp2";
	char *p3 = new char[strlen(p1) + strlen(p2) + 1];
	strcpy(p3, p1);
	strcat(p3, p2);
	cout<<p3;
	return 0;
}
