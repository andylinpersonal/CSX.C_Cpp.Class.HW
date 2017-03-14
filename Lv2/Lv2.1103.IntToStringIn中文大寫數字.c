#include <stdlib.h>
#include <stdio.h>

#define MAX_ARR_SIZE 32


int main(){
	int in, numlst[MAX_ARR_SIZE] = {0};
	char **digilst  = {" ","壹","貳","參","肆","伍","陸","柒","捌","玖"};
	char **orderlst = {" ","拾","佰","仟","萬"};
	
	scanf("%d", &in);
	
	if(in <= 99999){
		int i = 0, flag = 0;
		while(1){
			numlst[i] = in % 10;
			in /= 10;
			i++;
			if(!in)
				break;
		}
		flag = strlen(numlst);
		for(int i = flag; i > 0; i--){
			if(numlst[(i - 1)] != 0){
				printf("%s", *digilst[numlst[(i - 1)]]);
				if(i != 1)
					printf("%s", *orderlst[(i - 1)]);
			}
		}
		printf("元整\n");
	}
	return 0;
}

