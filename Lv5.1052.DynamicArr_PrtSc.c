#include <stdlib.h>

int main(){
	int size;
	scanf(" %d", &size);
	int *dataBase = malloc(sizeof(int) * size);
	for(int i = 0; i < size; i++)
		scanf(" %d", dataBase + i);
	
	int sum = 0, maxIdx = 0;
	for(int i = 0; i < size; i++)
		sum += *(dataBase + i);
	printf("avg = %.2f\n", (double)sum / size);
	printf("fail:\n");
	for(int i = 0; i < size; i++){
		if(*(dataBase + i) < 60)
			printf("%d: %d\n", i + 1, *(dataBase + i));
		if(*(dataBase + i) >= *(dataBase + maxIdx))
			maxIdx = i; 
	}
	printf("highest:\n%d: %d\n", maxIdx + 1, *(dataBase + maxIdx));
	free(dataBase);
	return 0;
}

