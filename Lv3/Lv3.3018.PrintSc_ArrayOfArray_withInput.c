#include <stdlib.h>
#define LENGTH 5
#define WIDTH 3
int main(){
	int sc[LENGTH][WIDTH] = {0};
	for(int i = 0; i < LENGTH; i++)
		for(int j = 0; j < WIDTH; j++){
			scanf("%d", &sc[i][j]);
		}
	int width = sizeof(*sc)/sizeof(**sc), group = sizeof(sc)/sizeof(*sc);
	int total = 0, itemCnt = width * group, highestID;
	double highestAvg = 0;
	for(int i = 0; i < group; i++){
		int sum = 0;
		printf("student %d\n", (i + 1));
		for(int j = 0; j < width; j++){
			printf(" %d: %d\n", (j + 1), sc[i][j]);
			total += sc[i][j];
			sum += sc[i][j];
		}
		printf(" sum: %d\n avg: %.2f\n", sum, ((double)sum / (double)width));
		if(((double)sum / width) > highestAvg){
			highestAvg = (double)sum / (double)width;
			highestID = i + 1;
		}
	}
	printf("total: %d, avg: %.2f\n", total, ((double)total / (double)itemCnt));
	printf("highest avg: student %d: %.2f\n", highestID, highestAvg);
	//for(int i = 0; i < )
	return 0;
}

