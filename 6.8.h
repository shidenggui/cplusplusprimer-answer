#ifndef C6_8_H
#define C6_8_H
int fact(int n){
	int sum = 1;
	while(n > 1){
		sum *= n--;
	}
	return sum;
}
#endif
