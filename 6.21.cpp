#include <iostream>
using namespace std;

int max(int a, int *b){
	return ((a < *b)) ? *b : a;
}
int main(){
	int a = 0;
	int *b = nullptr;
	b = new int;
	cin>>a>>*b;
	cout<<a<<" "<<*b;
	cout<<endl<<max(a, b);
	return 0;
}
