#include <stdio.h>

void main(){
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("sum is %d\n", a + b + c);
	printf("average is %.2lf\n", (double)(a + b + c) / 3);
	printf("product is %d\n", a * b * c);
	if(a < b){
		if(b < c){
			printf("smallest is %d\n", a); 
			printf("largest is %d\n", c); 
		}
		else {
			if(a < c){
				printf("smallest is %d\n", a); 
				printf("largest is %d\n", b); 
			}
			else{
				printf("smallest is %d\n", c); 
				printf("largest is %d\n", b); 
			}
		}
	}
	else {
		if(b > c){
			printf("smallest is %d\n", c); 
			printf("largest is %d\n", a); 
		}
		else{
			if(a < c){
				printf("smallest is %d\n", b); 
				printf("largest is %d\n", c); 
			}
			else{
				printf("smallest is %d\n", b); 
				printf("largest is %d\n", a); 
			}
		}
	}
}
