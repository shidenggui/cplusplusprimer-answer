#include <iostream>
using namespace std;

int main(){
	char c;
	unsigned vowelCnt = 0;
	while(cin>>noskipws>>c){
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || 
		   c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
		   c == '\t' || c== ' ' || c == '\n'){
			++vowelCnt;
		}
	}
	cout<<"vowelCnt: "<<vowelCnt;
	return 0; 	
}
