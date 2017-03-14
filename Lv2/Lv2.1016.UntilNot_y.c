#include <stdlib.h>
#include <stdio.h>

int main(){
	char c;
	while(1){
		scanf(" %c", &c);
		if(c != 'y')
			break;
		printf("run\n");
	}
	return 0;
}

