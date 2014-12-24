#include <iostream>
#include <vector>
using namespace std;

int main(){
	int a[] = {1, 2, 3, 4};
	vector<int> v(begin(a), end(a));
	for(auto i : a){
		cout<<i<<" ";
	}
	return 0;
}
