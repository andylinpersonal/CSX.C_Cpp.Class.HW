#include <stdlib.h>

void main(){
	int n, sum = 0;
	scanf("%d", &n);
	for(int i = 1; i < n; i++){
		printf("%d+", i);
		sum += i;
	}
	printf("%d = ", n);
	sum += n;
	printf("%d\n", sum);
	return;
}

