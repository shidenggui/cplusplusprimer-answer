#include <iostream>
using std::cout;
using std::endl;

int main(){
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};
	const char *cp = ca;
	cout<<"sizeof(ca): "<<sizeof(ca)<<endl;
	while(*cp){
		cout<<*cp<<endl;
		printf(" add: %p, null: %d\n", cp, (cp == nullptr));
		++cp;
	}
}
