#include <stdlib.h>

int main(){
	int sc[2][3] = {0};
	int total = 0, cnt = 0;
	for(int i = 0; i < 2; i++)
		for(int j = 0; j < 3; j++){
			scanf("%d", &sc[i][j]);
			total += sc[i][j];
			cnt++;
		}
	for(int i = 0; i < 2; i++){
		int sum = 0, cnt_g = 0;
		printf("class %d\n", (i + 1));
		for(int j = 0; j < 3; j++){
			printf(" %d: %d\n", (j + 1), sc[i][j]);
			cnt_g++;
			sum += sc[i][j];
		}
		printf(" sum: %d\n avg: %.2f\n", sum, (float)sum/cnt_g);
	}
	printf("total: %d, avg: %.2f\n", total, (float)total/cnt);
	return 0;
}

