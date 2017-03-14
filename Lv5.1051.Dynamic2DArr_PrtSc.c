#include <stdlib.h>
#include <stdio.h>

int main(){
	int m, n;
	int **scTable;
	scanf(" %d %d", &m, &n);
	
	scTable = malloc(sizeof(int *) * m);
	for(int i = 0; i < m; i++){
		*(scTable + i) = malloc(sizeof(int *) * n);
		for(int j = 0; j < n; j++)
			scanf("%d", &scTable[i][j]);
	}
	int total = 0;
	for(int i = 0; i < m; i++){
		int sum = 0;
		printf("class %d\n", i + 1);
		for(int j = 0; j < n; j++){
			printf(" %d: %d\n", j + 1, scTable[i][j]);
			sum += scTable[i][j];
			total += scTable[i][j];
		}
		printf(" sum: %d\n avg: %.2f\n", sum, (double)sum / n);
	}
	printf("total: %d, avg: %.2f\n", total, (double)total / (n * m));
	return 0;
}

