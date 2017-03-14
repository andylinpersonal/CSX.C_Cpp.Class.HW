#include <stdlib.h>

void main(){
	int roll, sc;
	scanf("%d", &roll);
	if(!((roll == 2) || (roll == 1))){
		printf("roll error\n");
		return;
	}
	scanf("%d", &sc);
	if(!((sc <= 100) && (sc >= 0))){
		printf("score error\n");
		return;
	}
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
	return;
}

