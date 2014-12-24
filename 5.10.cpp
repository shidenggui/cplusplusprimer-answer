#include <iostream>
using namespace std;

int main(){
	char c;
	unsigned vowelCnt = 0;
	while(cin>>c){
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
		   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
			++vowelCnt;
		}
	}
	cout<<"vowelCnt: "<<vowelCnt;
	return 0; 	
}
