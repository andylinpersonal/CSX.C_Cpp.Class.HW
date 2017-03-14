#include <stdlib.h>

#define MAX 100

int main(){
	char str[MAX] = {0};
	int c, diff = 'a' - 'A';
	int i = 0;
	while(((c = getchar()) != '\n') && (c != -1)){
		if((c <= 'z') && ('a' <= c))
			str[i++] = c - diff;
		else
			str[i++] = c;
	}
	printf("%s\n", str);
	return 0;
}

