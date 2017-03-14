#include <stdlib.h>

int main(){
	int sc[3] = {0};
	scanf("%d %d %d", &sc[0], &sc[1], &sc[2]);
	printf("avg = %.2f\n", (double)(sc[0] + sc[1] + sc[2])/3);
	
	int existFail = 0, fail[3] = {0}, highestID = 0, highest = 0;
	for(int i = 1; i <= 3; i++){
		if(sc[(i - 1)] < 60){
			existFail = 1;
			fail[(i - 1)] = 1;
		}
		if(sc[(i - 1)] > highest){
			highest = sc[(i - 1)];
			highestID = i;
		}
	}
	printf("fail:\n");
	if(existFail){
		
		for(int i = 1; i <= 3; i++)
			if(fail[(i - 1)])
				printf("%d: %d\n", i, sc[(i - 1)]);
	}
	printf("highest:\n%d: %d\n", highestID, sc[(highestID - 1)]);
	return 0;
}

