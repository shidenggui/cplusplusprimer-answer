#include <iostream>
#include <stdexcept>
using namespace std;

int main(){
	int a = 0, b = 0;
	cin>>a>>b;
	try{
		if(0 == b){
			throw runtime_error("b is 0!");
		}
		cout<<a/b;
		cout<<endl;
	}catch(runtime_error err){
		cout<<err.what()<<endl;
	}
	return 0;
}
