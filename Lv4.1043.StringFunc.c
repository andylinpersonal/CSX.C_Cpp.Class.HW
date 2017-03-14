//c99
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_WIDTH 1023 

int main(){
	char str1[MAX_WIDTH] = {0}, str2[MAX_WIDTH] = {0};
	gets(str1);
	gets(str2);
	char *sign = "";
	if(strcmp(str1, str2) > 0) sign = ">";
	else if(strcmp(str1, str2) < 0) sign = "<";
	else sign = "==";
	printf("1%s2\n", sign);
	strcat(str1, str2);
	puts(str1);
	printf("%d\n", strlen(str1));
	return 0;
} 
