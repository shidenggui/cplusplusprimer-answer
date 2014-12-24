#include <iostream>
using namespace std;

int fact(int n){
	int sum = 1;
	while(n > 1){
		sum *= n--;
	}
	return sum;
}
int main(){
	int n = 0;
	cout<<"input n:";
	cin>>n;
	cout<<"ret:"<<fact(n)<<endl;
	return 0;
}
