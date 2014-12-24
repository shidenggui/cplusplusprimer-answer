#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v;
	for(int i = 0; i != 100; ++i){
		v.push_back(i); 
	}
	for(auto &i : v){
		i = ((i % 2) ? 2 * i : i); 
	}
	for(auto i : v){
		cout<<i<<" ";
	}
	return 0;
}
