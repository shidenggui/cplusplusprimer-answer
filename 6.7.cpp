#include <iostream>
using namespace std;

int acnt = 0;
void f(){
	static int cnt = 0;
	acnt = ++cnt;
}
int main(){
	int n = 0;
	cin>>n;
	for(int i = 0; i < n; ++i){
		f();
	}
	cout<<acnt<<endl;
	return 0;
}
