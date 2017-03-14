#include <stdlib.h>
int sum(int n);
int main(){
	int n, s;
	scanf(" %d", &n);
	s = sum(n);
	printf("%d\n", s);
	return 0;
}

int sum(int n){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += i;
	}
	return sum;
}