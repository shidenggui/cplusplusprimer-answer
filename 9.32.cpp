#include <iostream>
using namespace std;

void fun(int *a, int b){
    cout << *a << "  " << b << endl;
}
int main(){
    int ia[] = {1, 2, 4};
    int *p = ia;
    fun(p, *p++);
    cout << *p <<endl;
    return 0;
}
