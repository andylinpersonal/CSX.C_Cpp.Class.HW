#include <stdio.h>
#include <stdlib.h>
#define MAX 1023
//c99

int main(){
	char c, str1[MAX] = {0}, str2[MAX] = {0};
	c = getchar();
	scanf(" %s \n", str1);
	gets(str2);
	printf("%c\n", c);
	printf("%s\n", str1);
	printf("%s\n", str2);
	return 0;
}

