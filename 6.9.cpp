#include "6.9.h"
int fact(int n){
	int sum = 1;
	while(n > 1){
		sum *= n--;
	}
	return sum;
}
