#include <stdlib.h>
#include <stdio.h>

int main(){
	double h, w, bmi;
	scanf("%lf%lf", &h, &w);
	bmi = w / ((h / 100) * (h / 100));
	printf("%.2lf\n", bmi);
	if(bmi >= 35)
		printf("Obese Class III\n");
	else if(bmi >= 30)
		printf("Obese Class II\n");
	else if(bmi >= 27)
		printf("Obese Class I\n");
	else if(bmi >= 24)
		printf("Overweight\n");
	else if(bmi >= 18.5)
		printf("Normal\n");
	else
		printf("Underweight\n");
	return 0;
}

