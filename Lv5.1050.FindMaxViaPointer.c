#include <stdlib.h>
#define MAX 5
int main(){
	int in[MAX];
	scanf(" %d %d %d %d %d", &in[0], &in[1], &in[2], &in[3], &in[4]);
	int *P = in;
	int sum = 0, max_idx = 0;
	for(int i = 0; i < MAX; i++){
		sum += *(P + i);
		if(*(P + i) >= *(P + max_idx))
			max_idx = i;
	}
	printf("%d: %d", max_idx + 1, *(P + max_idx));
	return 0;
}

