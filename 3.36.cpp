#include <iostream>
#include <vector>
using namespace std;

int main(){
	int a[] = {2, 4, 4, 5};
	int b[] = {2, 3, 4, 5};
	vector<int> v1(5, 7);
	vector<int> v2(5, 8);

	//compare int[]
	if(sizeof(a) == sizeof(b)){
		int i = 0;
		for(i = 0; i != sizeof(a) / sizeof(int); i++){
			if(a[i] != b[i]){
				break;
			}
		}
		if(i ==  sizeof(a) / sizeof(int)){
			cout<<"int [] equle"<<endl;
		}else{
			cout<<"int [] not equle"<<endl;
		}
	}else{
			cout<<"int [] not equle"<<endl;
	}
	
	//compare vector
	cout<<"vector "<<((v1 == v2) ? "" : "not")<<" equle"<<endl;	
	return 0;
}

