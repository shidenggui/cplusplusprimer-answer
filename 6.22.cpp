#include <iostream>
using namespace std;

void swap_point(int **a, int **b){
	int *t = *a;
	*a = *b;
	*b = t;
}
void swap_ref(int *&a, int *&b){
	int *t = a;
	a = b;
	b = t;
}
int main(){
	int a = 1, b = 2, *p1 = &a, *p2 = &b;
	cout<<"p1:"<<p1<<" p2:"<<p2<<endl;
	cout<<"swap_point:\n";
	swap_point(&p1, &p2);
	cout<<"p1:"<<p1<<" p2:"<<p2<<endl;
	cout<<"swap_ref:\n";
	swap_ref(p1, p2);
	cout<<"p1:"<<p1<<" p2:"<<p2<<endl;
	return 0;
}
