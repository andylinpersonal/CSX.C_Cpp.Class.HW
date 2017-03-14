//c99
#include <stdlib.h>
#include <stdio.h>

int main(){
	int *sc[3] = {0};
	for(int i = 0; i <= 2; i++)
		sc[i] = malloc(sizeof(int) * (i + 1));
	for(int i = 0; i <= 2; i++)
		for(int j = 0; j <= i; j++)
			scanf(" %d", (sc[i] + j));
	for(int i = 0; i <= 2; i++){
		for(int j = 0; j <= i; j++){
			printf("%d", *(sc[i] + j));
			(j != i)? printf(" "): printf(" \n");
		}
	}
	return 0;
}

