#include <iostream>
using namespace std;
int main(){
	int ia[3][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12},
	};
	
	cout<<"first:"<<endl;
	for (const auto &i : ia){
		for(const auto j : i){
			cout<<j<<" ";
		}
		cout<<endl;
	}

	cout<<"second"<<endl;
	for(int i = 0; i != 3; ++i){
		for(int j = 0; j != 4; ++j){
			cout<<ia[i][j]<<" ";
		}
		cout<<endl;
	}
	
	cout<<"third:"<<endl;
	for(int (*i)[4] = begin(ia); i != end(ia); ++i){
		//for(int *j = static_cast<int*>i; j != (i + 1); ++j){
		//	cout<<*j<<" ";
		//}		
		for (int *j = i[0]; j != i[0] + 4; ++j){
			cout<<*j<<" ";
		}
	}
}
