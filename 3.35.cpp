#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int a[] = {1, 2, 3, 4};
	int* p = a;
	while((p != end(a)) && !(*p++ = 0));
	for(auto i : a){
		cout<<i<<" ";
	}
}
