#include <stdlib.h>

int main(){
	int roll, sc;
	scanf("%d%d", &roll, &sc);
	if(roll == 1){
		if(sc >= 60)
			printf("pass\n");
		else
			printf("fail\n");
	} 
	else if(roll == 2){
		if(sc >= 70)
			printf("pass\n");
		else
			printf("fail\n");
	}	
	return 0;
}

