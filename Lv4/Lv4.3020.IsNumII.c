#include <stdlib.h>

#define MAX 40

int main(){
	while(1){
		char str[MAX] = {0}, c;
		int Not_Number = 0, i = 0;
		scanf(" %s", str);
		do{
			if(!((str[i] <= '9') && ('0' <= str[i]))){
				Not_Number = 1;
				break;
			}
			i++; 
		} while (str[i]);
		if(Not_Number)
			printf("is not a number\n");
		else{
			printf("n=%s\n", str);
			break;
		}
	}	
	return 0;
}
