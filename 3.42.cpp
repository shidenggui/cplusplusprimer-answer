#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v(5, 42);
	int a[5] = {};
	for(auto i : a){
		cout<<i<<" ";
	}
	cout<<endl;
	for(int i = 0; i != v.size(); ++i){
		a[i] = v[i];
	}
	for(auto i : a){
		cout<<i<<" ";
	}
	return 0;
}
