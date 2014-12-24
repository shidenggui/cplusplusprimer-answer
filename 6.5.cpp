#include <iostream>
using namespace std;

int abs(int a){
	return (a > 0)  ? a : -a;
}
int main(){
	int n = 0;
	cout<<"input n:";
	cin>>n;
	cout<<"abs:"<<abs(n);
	return 0;
}
