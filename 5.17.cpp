#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> v1;
	vector<int> v2;
	for(int i = 0; i < 5; ++i){
		v1.push_back(i);
	}
	for(int i = 0; i < 10; ++i){
		v2.push_back(i);
	}
	unsigned min = (v1.size() < v2.size()) ? v1.size() : v2.size();
	for(int i = 0; i < min; ++i){
		cout<<"p: "<<i + 1<<"v1: "<<v1[i]<<"v2: "<<v2[i]<<endl;
		if(v1[i] != v2[i]){
			cout<<"p: "<<i + 1<<"v1: "<<v1[i]<<"v2: "<<v2[i]<<endl;
			break;	
		}
	}
	return 0;
}
