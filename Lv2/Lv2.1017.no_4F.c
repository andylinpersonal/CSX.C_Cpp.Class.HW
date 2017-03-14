#include <stdlib.h>

int main(){
	int f;
	scanf("%d", &f);
	for(int i = 1; i <= f; i++){
		if(i != 4)
			printf("floor %d\n", i);
	}
	return 0;
}

