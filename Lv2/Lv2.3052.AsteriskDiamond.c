#include <stdio.h>

void main() {
	int n;
	scanf("%d", &n);
	n = n / 2 + 1;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= (n - i); j++)
			printf(" ");
		for(int j = 1; j <= i; j++){
			if(j != i)
				printf("**");
			else
				printf("*\n");
		}
	}
	n--;
	for(int i = n; i >= 1; i--){
		for(int j = 0; j <= (n - i); j++)
			printf(" ");
		for(int j = 1; j <= i; j++){
			if(j != i)
				printf("**");
			else
				printf("*\n");
		}
	}
}
