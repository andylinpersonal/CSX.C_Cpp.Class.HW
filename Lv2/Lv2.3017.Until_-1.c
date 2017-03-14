#include <stdlib.h>

int main(){
	double sum = 0, ave, num, max;
	int maxpos, cnt = 0;
	while((scanf("%lf", &num), num != -1)){
		cnt++;
		sum += num;
		if(num >= max){
			max = num;
			maxpos = cnt;
		}
	}
	ave = sum / cnt;
	printf("%d\n%.1lf\n%d\n%d\n", (int)sum, ave, (int)max, maxpos);
	return 0;
}

