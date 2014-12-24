#include <iostream>
using namespace std;

int main(){
	string s1;
	string s2;
	unsigned cnt = 1;
	cin>>s1;
	while(cin>>s2){
		if(s1 == s2){
			++cnt;
			cout<<s1;
			break;
		}else{
			if(1 < cnt){
				cout<<"string: "<<s1<<" count: "<<cnt<<endl;
				cnt = 1;
			}
			s1 = s2;
		}
	}
	if(1 == cnt){
		cout<<"no!!!";
	}
	cout<<"end!!!";
	return 0;
}
