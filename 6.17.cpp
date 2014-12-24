#include <iostream>
#include <cctype>
using namespace std;

bool is_upper_string(const string &s){
	for(const auto &i : s){
		if(isupper(i)){
			return true;
		}
	}
	return false;
}

string & lower_string(string &s){
	for(auto &i : s){
		if(isupper(i)){
			i = tolower(i);
		}
	}	
	return s;
}
int main(){
	string s;
	cin>>s;
	cout<<"is upper in string:"<<((is_upper_string(s)) ? "true" : "false")<<endl;
	cout<<"to lower:"<<lower_string(s)<<endl;
	return 0;
}
