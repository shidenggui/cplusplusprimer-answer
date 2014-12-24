#include <iostream>
using namespace std;

int main(){
	int grade = 0;
	cin>>grade;
	cout<<endl;
	string fg = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade > 60) ? "low pass" : "fail";

	cout<<fg;
	return 0;
}
