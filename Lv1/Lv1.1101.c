#include <stdlib.h>

void main(){
	double a, b;
	scanf("%lf%lf%c", &a, &b);
	printf("%.2lf + %.2lf = %.2lf\n", a, b, a + b);
	printf("%.2lf - %.2lf = %.2lf\n", a, b, a - b);
	printf("%.2lf * %.2lf = %.2lf\n", a, b, a * b);
	printf("%.2lf / %.2lf = %.2lf\n", a, b, a / b);
	return;
}
