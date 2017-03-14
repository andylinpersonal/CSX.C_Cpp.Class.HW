#include <stdlib.h>
#include <stdio.h>
#include "score.h"

int main(){
	int numClassM = 0;
	int *scLst = 0;
	
	scanf(" %d", &numClassM);
	scLst = malloc(sizeof(int *) * numClassM);
	for(int i = 0; i < numClassM; i++)
		scanf(" %d", scLst + i);
	printf("avg = %.2f\n", Avg(numClassM, scLst));
	printf("highest:\n");
	printf("%d: %d\n", MaxScore(numClassM, scLst) + 1, *(scLst + MaxScore(numClassM, scLst)));
	return 0;
}

double Avg(int n, int *P){
	double sum = 0;
	for(int i = 0; i < n; i++)
		sum += *(P + i);
	return (double)sum / n;
}

int MaxScore(int n, int *P){
	int max = 0, maxVal = 0;
	for(int i = 0; i < n; i++){
		if(*(P + i) > maxVal)
			max = i; maxVal = *(P + i);
	}
	return max;
}
